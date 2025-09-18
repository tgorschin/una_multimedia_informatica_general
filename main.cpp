#include <iostream>
#include <ncurses.h>
#include <cstdlib>
#include <ctime>
#include "Nave.h"
#include "Laberinto.h"

using namespace std;

enum GameState {
    INTRO,
    MENU,
    PLAYING,
    CREDITS,
    GANASTE,
    GAMEOVER,
    FINAL, 
    EXIT
};

const int delay = 30;
bool game_over;
int quesos;
bool salir;
int nivelActual;
GameState current_state;
bool gano;

Nave miNave;
Laberinto miLaberinto;

int timer_seconds = 60;
int frame_count = 0;

const int quesoX_niveles[] = {111, 100, 4};
const int quesoY_niveles[] = {38 , 1, 4};
int quesoX, quesoY;

void setup();
void input();
void update();
void draw();
void gameover();
void siguienteNivel();
void show_intro();
void menu();
void show_credits();
void play_game();
void pantallaGanaste();
void pantallaFinal(); 


int main(){
    srand(time(0));

    initscr();
    noecho();
    curs_set(0);
    keypad(stdscr, TRUE);
    nodelay(stdscr, TRUE);
    start_color();

    if (LINES < miLaberinto.m_alto || COLS < miLaberinto.m_ancho) {
        endwin();
        printf("La terminal tiene que tener como minimo %dx%d\n\n", miLaberinto.m_ancho, miLaberinto.m_alto);
        exit(1);
    }
    
    init_pair(1, COLOR_YELLOW, COLOR_BLACK);

    current_state = MENU;
    salir = false;

    while (!salir)
    {
        switch (current_state) {
            case INTRO:
                show_intro();
                break;
            case MENU:
                menu();
                break;
            case PLAYING:
                play_game();
                break;
            case GANASTE:
                pantallaGanaste();
                break;
            case GAMEOVER:
                gameover();
                break;
            case FINAL:
                pantallaFinal(); // 
                break;
            case CREDITS:
                show_credits();
                break;
            case EXIT:
                salir = true;
                break;
        }
    }

    endwin();
    cout << endl;
    return 0;
}

// -------------------------------------------------------

void setup() {
    game_over = false;
    quesos = 0;
    miNave.setup(miLaberinto.m_ancho, miLaberinto.m_alto);

    miNave.setEnergia(1);
    miNave.setVidas(3);
    
    nivelActual = 0;
    siguienteNivel();

    timer_seconds = 60;
    frame_count = 0;
}

// -------------------------------------------------------

void siguienteNivel() {
    miLaberinto.loadMap(nivelActual);
    quesoX = quesoX_niveles[nivelActual];
    quesoY = quesoY_niveles[nivelActual];
}

// -------------------------------------------------------

void input() {
    int tecla = getch();

    int nextX = miNave.getX();
    int nextY = miNave.getY();

    switch (tecla)
    {
     case KEY_UP:
        nextY--;
        miNave.setDireccion(ARRIBA);
        break;

     case KEY_DOWN:
        nextY++;
        miNave.setDireccion(ABAJO);
        break;

     case KEY_LEFT:
        nextX--;
        miNave.setDireccion(IZQUIERDA);
        break;

     case KEY_RIGHT:
        nextX++;
        miNave.setDireccion(DERECHA);
        break;

     case 27:
        game_over = true;
        break;

     
     case 'e':
        if (nivelActual < 2) { 
            nivelActual++;
            siguienteNivel();
            miNave.setup(miLaberinto.m_ancho, miLaberinto.m_alto);
            quesos++; 
            timer_seconds = 60;
        } else {
            game_over = true;
            gano = true;
        }
        break;
      default:
        break;
    }

    if (!miLaberinto.esPared(nextX, nextY)) {
        miNave.setX(nextX);
        miNave.setY(nextY);
    }
}
// -------------------------------------------------------

void update()
{
    miNave.update();

    if (miNave.getX() == quesoX && miNave.getY() == quesoY) {
        quesos++;
        nivelActual++;
        timer_seconds = 60;
        
        if (nivelActual < 3) {
            siguienteNivel();
            miNave.setup(miLaberinto.m_ancho, miLaberinto.m_alto);
        } else {
            game_over = true;
            gano = true;
        }
    }

    frame_count++;
    if (frame_count >= 33) {
        timer_seconds--;
        frame_count = 0;
    }

    if (timer_seconds <= 0) {
        game_over = true;
        gano = false;
    }
}

// -------------------------------------------------------

void draw() {
    erase();
    miLaberinto.draw();
    box(stdscr, 0, 0);

   mvprintw(0, 80, "[QUESOS:     ]");
    attron(COLOR_PAIR(1));
    for (int i = 0; i < quesos; i++) {
        mvaddch(0, 88 + i, ACS_DIAMOND);
    }
    attroff(COLOR_PAIR(1));
    
    // for (int i = 0; i < miNave.getEnergia(); i++) {
    //    mvaddch(0, 91 + i, ACS_CKBOARD);
    //}
    
    // mvprintw(0, 100, "[VIDAS:          ]");
    // for (int i = 0; i < miNave.getVidas(); i++) {
    //    mvaddch(0, 109 + i, ACS_BLOCK);
    //}

    attron(COLOR_PAIR(1));
    mvaddch(quesoY, quesoX, ACS_DIAMOND);
    attroff(COLOR_PAIR(1));

    mvprintw(0, 100, "[TIEMPO:     ]");
    mvprintw(0, 110, "%d", timer_seconds);
    
    mvprintw(0, 140, "[NIVEL:     ]");
    mvprintw(0, 149, "%d", nivelActual + 1);

    miNave.draw();

    refresh();
    delay_output(delay);
}

// -------------------------------------------------------

void gameover() {
    for (int y = 10; y < 16; y++)
        mvhline(y, 40, ' ', 40);

    mvaddch(9, 39, ACS_ULCORNER);
    mvaddch(9, 80, ACS_URCORNER);
    mvaddch(16, 39, ACS_LLCORNER);
    mvaddch(16, 80, ACS_LRCORNER);

    mvhline(9, 40, ACS_HLINE, 40);
    mvhline(16, 40, ACS_HLINE, 40);
    mvvline(10, 39, ACS_VLINE, 6);
    mvvline(10, 80, ACS_VLINE, 6);
    
    mvprintw(12, 55, "GAME OVER");
    mvprintw(13, 46, "Presione cualquier tecla para volver");
    
    refresh();

    nodelay(stdscr, FALSE);
    getch();
    nodelay(stdscr, TRUE);

    current_state = MENU;
    setup();
}
// -------------------------------------------------------
void pantallaGanaste() {
    for (int y = 10; y < 16; y++)
        mvhline(y, 40, ' ', 40);

    mvaddch(9, 39, ACS_ULCORNER);
    mvaddch(9, 80, ACS_URCORNER);
    mvaddch(16, 39, ACS_LLCORNER);
    mvaddch(16, 80, ACS_LRCORNER);

    mvhline(9, 40, ACS_HLINE, 40);
    mvhline(16, 40, ACS_HLINE, 40);
    mvvline(10, 39, ACS_VLINE, 6);
    mvvline(10, 80, ACS_VLINE, 6);
    
    mvprintw(12, 55, "¡GANASTE!");
    mvprintw(13, 46, "Presione cualquier tecla para continuar");
    
    refresh();

    nodelay(stdscr, FALSE);
    getch();
    nodelay(stdscr, TRUE);

    current_state = FINAL; 
}

// -------------------------------------------------------

void pantallaFinal() {
    erase();
    int y = miLaberinto.m_alto / 2;
    int x = miLaberinto.m_ancho / 2 - 50;


    mvprintw(y + 2, x - 15, "Nada ocurre, no hay luces ni aplausos. No hay salida, solo silencio");
    mvprintw(y + 3, x - 15, "las paredes no se abren solo está el queso");
    mvprintw(y + 4, x - 15, "Entonces lo todo el queso no era una llave. Ni una promesa.");
    mvprintw(y + 6, x - 15, "Era una excusa.");
    mvprintw(y + 8, x - 15, "Una mentira hermosa que te hizo correr sin mirar atras");

    refresh();
    
    nodelay(stdscr, FALSE);
    getch();
    nodelay(stdscr, TRUE);
      
    current_state = MENU;
    setup();
}

// -------------------------------------------------------

void show_intro() {
    erase();
    int y = miLaberinto.m_alto / 2;
    int x = miLaberinto.m_ancho / 2 - 50;
    
    attron(COLOR_PAIR(1));

    mvprintw(y - 10, x, "No se cuantos dias llevo aqui. En este lugar no hay tiempo, solo pruebas, pasillos, y queso.");
    mvprintw(y - 8, x, "Soy el sujeto Q-203. Uno mas en una larga fila de intentos. Dicen que nadie ha conseguido todos los quesos.");
    mvprintw(y - 7, x, "Algunos se rindieron, otros, desaparecieron.");
    mvprintw(y - 5, x, "El rumor entre las ratas es claro: cuando llegas al ultimo queso");
    mvprintw(y - 4, x, "pasa algo, pero nadie sabe que");
    mvprintw(y - 2, x, "Los mejores, los mas rapidos, mas fuertes. Vi como brillaban en los primeros niveles.");
    mvprintw(y - 1, x, "Como caian en los ultimos. Que les paso? Que vieron? Que encontraron?");
    mvprintw(y + 1, x, "A veces pienso que este laberinto no tiene salida, que es un juego cruel disenado para rompernos.");
    mvprintw(y + 2, x, "Pero entonces aparece otro queso.");
    mvprintw(y + 4, x, "Y tengo que seguir... tengo que saber.");
    mvprintw(y + 5, x, "Tengo que ser el primero");
    mvprintw(y + 7, x, "Presiona cualquier tecla para continuar...");

    attroff(COLOR_PAIR(1));

    refresh();
    
    nodelay(stdscr, FALSE);
    wgetch(stdscr);
    nodelay(stdscr, TRUE);
      
    current_state = PLAYING;
    setup();
}

void menu() {
    erase();
    int y = miLaberinto.m_alto / 2;
    int x = miLaberinto.m_ancho / 2 - 10;

    mvprintw(y - 10, x - 20, "________                   _______  ________  ________     ");
    mvprintw(y - 9, x - 20, "|\\   __  \\                 /  ___  \\|\\   __  \\|\\_____  \\    ");
    mvprintw(y - 8, x - 20, "\\ \\  |\\  \\  ____________ /__/|_/  /\\ \\  |\\  \\|____|\\ /_   ");
    mvprintw(y - 7, x - 20, " \\ \\  \\\\\\  \\|____________\\__|//  / /\\ \\  \\\\\\  \\    |\\  \\  ");
    mvprintw(y - 6, x - 20, "  \\ \\  \\\\\\  \\|____________|   /  /_/__\\ \\  \\\\\\  \\  __\\_\\  \\ ");
    mvprintw(y - 5, x - 20, "   \\ \\_____  \\               |\\________\\ \\_______|\\______\\");
    mvprintw(y - 4, x - 20, "    \\|___| \\__\\               \\|_______|\\|_______|\\|_______|");
    mvprintw(y - 3, x - 20, "          \\|__|                                              ");   

    mvprintw(y, x, "1. Jugar");
    mvprintw(y + 2, x, "2. Creditos");
    mvprintw(y + 4, x, "3. Salir");

    refresh();
    
    nodelay(stdscr, FALSE);
    int tecla = wgetch(stdscr);
    nodelay(stdscr, TRUE);
    
    switch (tecla) {
        case '1':
            current_state = INTRO;
            break;
        case '2':
            current_state = CREDITS;
            break;
        case '3':
            current_state = EXIT;
            break;
    }
}

void show_credits() {
    erase();
    int y = miLaberinto.m_alto / 2;
    int x = miLaberinto.m_ancho / 2 - 15;

    mvprintw(y - 4, x, "CREDITOS");
    mvprintw(y - 2, x, "Hecho e idea Nilo Moran, Tobias Gorschin, Camila Jara");
    mvprintw(y, x, "Profesores: Juan Jose Maria Tirigall");
    mvprintw(y + 1, x + 12, "Lic. Noelia Melina Qualindi");

    mvprintw(y + 5, x, "Presiona cualquier tecla para volver al menu...");

    refresh();
    
    nodelay(stdscr, FALSE);
    wgetch(stdscr);
    nodelay(stdscr, TRUE);
    
    current_state = MENU;
}

void play_game() {
    while (!game_over)
    {
        input();
        update();
        draw();
    }
    if(gano) {
        current_state = GANASTE;
    } else {
        current_state = GAMEOVER;
    }
}