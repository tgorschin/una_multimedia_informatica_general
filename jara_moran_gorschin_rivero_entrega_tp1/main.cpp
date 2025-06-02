// Jara Camila
// Moran Nilo
// Gorschin Tobias
// Rivero Juan Cruz

#include <iostream>
using namespace std;

int main()
{
 
  bool salir_del_juego = false;
  int final;
  int opcion;   // Para el menú principal
  int eleccion; // Para las elecciones del juego

  while (!salir_del_juego)
{
    
           bool gameover_callejon = false , gameover = false, ganaste = false, gameover_colectivo = false, gameover_moron = false, gameover_flores = false;
            float dineroJugador = 120.50,  precioCoca = 75.50;

  
        system("clear");
        for (int i = 0; i < 11; i++) 
        {
            cout << "                                                                                                                        " << endl;
        }
        cout << "                                                                                                                        " << endl;
        cout << "            ██████╗ █████╗ ███╗   ███╗██╗███╗   ██╗ ██████╗      █████╗      ██████╗ █████╗ ███████╗ █████╗             " << endl;  
        cout << "           ██╔════╝██╔══██╗████╗ ████║██║████╗  ██║██╔═══██╗    ██╔══██╗    ██╔════╝██╔══██╗██╔════╝██╔══██╗            " << endl;
        cout << "           ██║     ███████║██╔████╔██║██║██╔██╗ ██║██║   ██║    ███████║    ██║     ███████║███████╗███████║            " << endl;
        cout << "           ██║     ██╔══██║██║╚██╔╝██║██║██║╚██╗██║██║   ██║    ██╔══██║    ██║     ██╔══██║╚════██║██╔══██║            " << endl;
        cout << "            ██████╗██║  ██║██║ ╚═╝ ██║██║██║ ╚████║╚██████╔╝    ██║  ██║    ╚██████╗██║  ██║███████║██║  ██║            " << endl;
        cout << "            ╚═════╝╚═╝  ╚═╝╚═╝     ╚═╝╚═╝╚═╝  ╚═══╝ ╚═════╝     ╚═╝  ╚═╝     ╚═════╝╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝            " << endl;
        for (int i = 0; i < 4; i++) 
        {
            cout << "                                                                                                                        " << endl;
        }
        cout << "                                                  1.    Jugar                                                           " << endl;
        cout << "                                                  2.   Créditos                                                         " << endl;
        cout << "                                                  3.    Salir                                                           " << endl;
        cout << "                                                                                                                        " << endl;
        cout << "                                                                                                                        " << endl;
        cout << "                                                                                                                        " << endl;
        cout << "                                          Elegí una opción:       ";
        cin >> eleccion;
        for (int i = 0; i < 11; i++) 
        {
            cout << "                                                                                                                        " << endl;
        }

        while (cin.fail() || eleccion < 1 || eleccion > 3)
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\n                                          Entrada inválida. Intente nuevamente:  ";
            cin >> eleccion;
        }
        cin.ignore(1000, '\n'); // Limpiar buffer

        switch (eleccion)
        {
        case 1:

            system("clear");
            for (int i = 0; i < 3; i++) 
            {
                cout << "                                                                                                                        " << endl;
            }
            cout << "            ─────────────────────────────────────────────────────────────────────────────────────────────────           " << endl;
            cout << "           |       ────────────────                                 *                                        |          " << endl;
            cout << "           |      | MORENO, 03:32AM |                        *                                               |          " << endl;
            cout << "           |       ────────────────         *                                                  █████         |          " << endl;
            cout << "           |      ☼    *                                    *   ( )                 *         ███████      * |          " << endl;
            cout << "           |                           *            *           | |          *                ███████        |          " << endl;
            cout << "           |                                        *           | |                            █████         |          " << endl;
            cout << "           |      *        ____________     ____________        | |                *                *        |          " << endl;
            cout << "           |              │            │ • │            │\\      | |   ________                *              |          " << endl;
            cout << "           |              │  ╔╗╔╗╔╗╔╗  │   │ ██  ██  ██ │ \\     | |   │      │                               |          " << endl;
            cout << "           |        *     |  ╚╝╚╝╚╝╚╝  │   │ ██  ██  ██ │  │    | |   │ 0  0 │     ____________       *      |          " << endl;
            cout << "           |              │  ╔╗╔╗╔╗╔╗  │   │            │  │    | |   │ 0  0 │    │            │\\            |          " << endl;
            cout << "           |              │  ╚╝╚╝╚╝╚╝  │   │ ██  ██  ██ │  │    | |   │ 0  0 │    │ ██  ██  ██ │  |    *     |          " << endl;
            cout << "           |              │            │   │            │  │    | |   │      |    │            │  |          |          " << endl;
            cout << "            ─────────────────────────────────────────────────────────────────────────────────────────────────           " << endl;
            cout << "                                                                                                                        " << endl;
            cout << "                                                                                                                        " << endl;
            cout << "                                                                                                                        " << endl;
            cout << "                                                                                                                        " << endl;
            cout << "                                                                                                                        " << endl;
            cout << "                                                                                                                        " << endl;
            cout << "                          Luego de una larga noche en el conurbano bonaerense, toca volver a casa.                      " << endl;
            cout << "                                                                                                                        " << endl;
            for (int i = 0; i < 10; i++) 
            {
                cout << "                                                                                                                        " << endl;
            }
            cout << " presiona ENTER para continuar...";
            cin.get();

             opcion = eleccion;

            if (opcion == 1) {

        

          // Pantalla "¿En que volves?"

          
    
          system("clear");
          for (int i = 0; i < 3; i++) 
         {cout << "                                                                                                                        " << endl;}
          cout << "            ─────────────────────────────────────────────────────────────────────────────────────────────────           " << endl;
          cout << "           |       ────────────────                                 *                                        |          " << endl;
          cout << "           |      | MORENO, 03:32AM |                        *                                               |          " << endl;
          cout << "           |       ────────────────         *                                                  █████         |          " << endl;
          cout << "           |      ☼    *                                    *   ( )                 *         ███████      * |          " << endl;
          cout << "           |                           *            *           | |          *                ███████        |          " << endl;
          cout << "           |                                        *           | |                            █████         |          " << endl;
          cout << "           |      *        ____________     ____________        | |                *                *        |          " << endl;
          cout << "           |              │            │ • │            │\\      | |   ________                *              |          " << endl;
          cout << "           |              │  ╔╗╔╗╔╗╔╗  │   │ ██  ██  ██ │ \\     | |   │      │                               |          " << endl;
          cout << "           |        *     |  ╚╝╚╝╚╝╚╝  │   │ ██  ██  ██ │  │    | |   │ 0  0 │     ____________       *      |          " << endl;
          cout << "           |              │  ╔╗╔╗╔╗╔╗  │   │            │  │    | |   │ 0  0 │    │            │\\            |          " << endl;
          cout << "           |              │  ╚╝╚╝╚╝╚╝  │   │ ██  ██  ██ │  │    | |   │ 0  0 │    │ ██  ██  ██ │  |    *     |          " << endl;
          cout << "           |              │            │   │            │  │    | |   │      |    │            │  |          |          " << endl;
          cout << "            ─────────────────────────────────────────────────────────────────────────────────────────────────           " << endl;
          cout << "                                                                                                                        " << endl;
          cout << "                                                                                                                        " << endl;
          cout << "                                                                                                                        " << endl;
          cout << "                                                                                                                        " << endl;
          cout << "                                                                                                                        " << endl;
          cout << "                                                       ¿En que volves?                                                  " << endl;
          cout << "                                                                                                                        " << endl;
          cout << "                                          1.           Vuelvo caminando                                                 " << endl;
          cout << "                                          2.       Voy a la estacion de tren                                            " << endl;
          cout << "                                          3.     Voy a la parada del colectivo                                          " << endl;
          cout << "                                                                                                                        " << endl;
          cout << "                                                                                                                        " << endl;
          cout << "                                                                                                                        " << endl;
          cout << "                                          Elegí una opción:       " ;  cin >> eleccion;
          for (int i = 0; i < 5; i++) 
            {cout << "                                                                                                                        " << endl;}
        
               // ---------------- si el usuario ingresa mal los datos -----------------

            while (cin.fail() || eleccion < 1 || eleccion > 3) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\n                                          Entrada inválida.  Intenta nuevamente:  ";
            cin >> eleccion;
        }
        cin.ignore(1000, '\n');

                 // -------------------------------------------------------------


          for (int i = 0; i < 7; i++) 
          {cout << "                                                                                                                        " << endl;}


        if (eleccion != 1 || eleccion != 2 || eleccion != 3){
            system("clear");

            // ------------------- escena vendedor ambulante para uso de float -------------------------

            cout << "\nEn el camino, un vendedor ambulante se te acerca y te ofrece una Coca bien fría por $" << precioCoca << "." << endl;
            cout << "\nRevisás tus bolsillos... tenés $" << dineroJugador << "." << endl;
            cout << "\n¿Querés comprarla?" << endl;
            cout << "\n1. Sí" << endl;
            cout << "\n2. No" << endl;
            cout << "\n" << endl;

            int compra;
            cin >> compra;
            
    
            if (compra == 1)
            {
                if (dineroJugador >= precioCoca)
                {
                    dineroJugador -= precioCoca;
                    cout << "\nComprás la Coca, te la tomás al toque. Te quedan $" << dineroJugador << "." << endl;
                    cout << "\nSentís una pequeña mejora de energía. (+0.5 al aguante mental)" << endl;
                }
                else
                {
                    cout << "\nNo te alcanza la plata. El vendedor se va murmurando algo sobre 'la inflación'." << endl;
                }
            }
            else if (compra == 2)
            {
                cout << "\nLe decís que no, y seguís caminando con la boca seca." << endl;
            }
            else
            {
                cout << "\nOpción inválida. El vendedor se ofende y se va sin decir una palabra." << endl;
            }
                cout << "\nPresiona ENTER para continuar..."; cin.ignore(); cin.get();
                system("clear");}

      // ------------------- ----------------------------------- -------------------------



      if (eleccion == 1)
        {
            system("clear");
            for (int i = 0; i < 3; i++) 
  {cout << "                                                                                                                        " << endl;}
   cout << "            ─────────────────────────────────────────────────────────────────────────────────────────────────           " << endl;
   cout << "           |       ────────────────    █     █   █  ██████████████████████████  █    █      █      █      █  |          " << endl;
   cout << "           | ▒▒▒  | MORENO, 04:13AM |  █▒▒▒▒▒█▒▒▒█▒▒██████████████████████████▒▒█▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒|          " << endl;
   cout << "           | ▒▒▒   ────────────────    █▒▒▒▒▒█▒▒▒█▒▒██████████████████████████▒▒█▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒|          " << endl;
   cout << "           | ▒▒▒ █      █      █       █▒▒▒▒▒█▒▒▒█▒▒██████████████████████████▒▒█▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒|          " << endl;
   cout << "           | ▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒▒█▒▒▒▒▒█▒▒▒█▒▒/                         | █▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒|          " << endl;
   cout << "           | ▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒▒█▒▒▒▒▒█▒▒▒█▒/             |             |█▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒|          " << endl;
   cout << "           | ▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒▒█▒▒▒▒▒█▒▒▒█/                             |▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒|          " << endl;
   cout << "           | ▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒▒█▒▒▒▒▒█▒▒▒/               |               |▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒|          " << endl;
   cout << "           | ▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒▒█▒▒▒▒▒█▒▒/                |                |▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒|          " << endl;
   cout << "           | ▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒▒█▒▒▒▒▒█▒/                                   |▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒|          " << endl;
   cout << "           | ▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒▒█▒▒▒▒▒█/                  |                  |█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒|          " << endl;
   cout << "           | ▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒▒█▒▒▒▒▒/                   |                   |▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒█▒▒|          " << endl;
   cout << "           | _______________________________/                    |                    |______________________|          " << endl;
   cout << "            ─────────────────────────────────────────────────────────────────────────────────────────────────           " << endl;
   cout << "                                                                                                                        " << endl;
   cout << "                                                                                                                        " << endl;
   cout << "                                                                                                                        " << endl;
   cout << "                                                                                                                        " << endl;
   cout << "                                                                                                                        " << endl;
   cout << "                                                                                                                        " << endl;
   cout << "                             Luego de un largo rato caminando, te encontras un callejon sin salida                      " << endl;
   cout << "                                                                                                                        " << endl;
   for (int i = 0; i < 12; i++) 
  {cout << "                                                                                                                        " << endl;}

      cout << " presiona ENTER para continuar.."; cin.ignore().get(); // Pasa a pantalla final
      gameover_callejon = true;
      gameover = true;

      }
          // pantalla tren

        else if (eleccion == 2)
        {
            system("clear");
            cout << "         │      │     //                                                                                 │     │        " << endl;
            cout << "         │ ┌┬┐  │    /                                ────────────                                       │     │ \\      " << endl;
            cout << "         │ ├┼┤  │   /                                │            │                                      │     │ │\\     " << endl;
            cout << "         │ └┴┘  │  /      │             ────────────────────────────────────────                         │     │ │*\\    " << endl;
            cout << "         │ ┌┬┐  │  │      │            /                                        \\                        │     │ │**\\   " << endl;
            cout << "         │ ├┼┤  │  │     /│           / ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ \\                       │     │ │***\\│ " << endl;
            cout << "         │ └┴┘  │  │    / │          /                      ┌──────────────────┐  \\                      │     │ │****│ " << endl;
            cout << "         │ ┌┬┐  │  │   /  │          │ ▌  ─────────  /─\\    │ 0101 0 101 01 01 │▌ │                      │     │ │****│ " << endl;
            cout << "         │ ├┼┤  │  │  /   │          │ ▌ │         ││   │───│ 101 01 0 10 101 0│▌ │                      │     │ │****│ " << endl;
            cout << "         │ └┴┘  │  │ /    │          │ ▌ │         │ \\─/ ───└──────────────────┘▌ │                      │     │ │****│ " << endl;
            cout << "         │ ┌┬┐  │  │/     │          │ ▌ │─────────│┌─────────────────────────┐ ▌ │                      │     │ │****│ " << endl;
            cout << "         │ ├┼┤  │  │     /           │ ▌ │         ││                        ││ ▌ │                      │     │ │****│ " << endl;
            cout << "         │ └┴┘  │  │    /            │ ▌ │         ││                        ││ ▌ │                      │     │ │****│ " << endl;
            cout << "         │ ┌┬┐  │  │   /             │ ▌ │         ││                        ││ ▌ │                      │     │ \\****│ " << endl;
            cout << "         │ ├┼┤  │  │  /              │ ▌ │         ││                        ││ ▌ │          \\           │     │  \\***│ " << endl;
            cout << "         │ └┴┘  │  │ /               │ ▌ │         ││                        ││ ▌ │           \\          │     │ \\ \\**│ " << endl;
            cout << "         │ ┌┬┐  │  │/   /            │ ▌  ───────── └─────────────────────────┘ ▌ │            \\         │     │ │\\ \\*│ " << endl;
            cout << "         │ ├┼┤  │  /   /             │ ▌                                        ▌ │             \\        ││    │ │*\\ \\│ " << endl;
            cout << "         │ └┴┘  │     /              │ ▌                                        ▌ │              \\       ││    │ │**\\   " << endl;
            cout << "         │ ┌┬┐  │    /               │  ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬  │               \\      │     │ │***\\│ " << endl;
            cout << "         │ ├┼┤  │   /                │                                            │                \\\\    │     │ │****│ " << endl;
            cout << "         │ └┴┘  │  /                 │                                            │                 \\    │     │ │****│ " << endl;
            cout << "         │ ┌┬┐  │ /                  │   ▬▬▬▬▬▬▬▬▬▬    ▬▬▬▬▬▬▬▬▬▬    ▬▬▬▬▬▬▬▬▬▬   │                  \\   │     │ │****│ " << endl;
            cout << "         │ ├┼┤  │/                   │                                            │                   \\  │     │ │****│ " << endl;
            cout << "         │ └┴┘  │                    │              ┌──────────────┐              │                    \\ │     │ │****│ " << endl;
            cout << "         │──────                     │     ▲        │**************│        ▲     │                     \\│     │ │****│ " << endl;
            cout << "         │                           │    ◄█►       └──────────────┘       ◄█►    │                      \\     │ │****│ " << endl;
            cout << "         │                           │   ◄███►                            ◄███►   │                       \\    │ \\****│ " << endl;
            cout << "        /│                           │    ◄█►         ▬▬▬▬▬▬▬▬▬▬▬▬         ◄█►    │                        \\   │  \\***│ " << endl;
            cout << "       / │                           │     ▼                                ▼     │                         \\  │   \\**│ " << endl;
            cout << "      /  │                            ───────────┬────┬──────────┬────┬───────────                           \\ │    \\*│ " << endl;
            cout << "     /   /                               │       │    │──────────│    │       │                               \\│     \\│ " << endl;
            cout << "        /                                │       │    │──────────│    │       │                                \\        " << endl;
            cout << "   /   /                     /           └───────┴────┴──────────┴────┴───────┘           \\                     \\       " << endl;
            cout << "  /   /                     /                ││││                       ││││               \\                     \\      " << endl;
            cout << " /   /                     /                 ││││───────────────────────││││                \\                     \\     " << endl;
            cout << " presiona ENTER para continuar.."; cin.ignore().get();

            system("clear");

             for (int i = 0; i < 3; i++) 
            {cout << "                                                                                                                        " << endl;}
             cout << "                                                                                                                        " << endl;
             cout << "            --------------------------------------------------------------------------------------------------          " << endl;
             cout << "           |                                                                                                  |         " << endl;
             cout << "           |                                                                                                  |         " << endl;
             cout << "           |                                                                                                  |         " << endl;
             cout << "           |                                                                                                  |         " << endl;
             cout << "           |                 | |                           | |                            | |                 |         " << endl;
             cout << "           |               ───────                      ────────                        ───────               |         " << endl;
             cout << "           |              | Morón |  ----------------- | Flores | -------------------- | Once  |              |         " << endl;
             cout << "           |               ───────                      ────────                        ───────               |         " << endl;
             cout << "           |                                                                                                  |         " << endl;
             cout << "           |                                                                                                  |         " << endl;
             cout << "           |                                                                                                  |         " << endl;
             cout << "           |                                                                                                  |         " << endl;
             cout << "           |                                                                                                  |         " << endl;
             cout << "            --------------------------------------------------------------------------------------------------           " << endl;
             cout << "                                                                                                                        " << endl;
             cout << "                                                                                                                        " << endl;
             cout << "                                                                                                                        " << endl;
             cout << "                                                                                                                        " << endl;
             cout << "                                                                                                                        " << endl;
             cout << "                                      Logras subir al tren con exito, ¿En que estacion bajas?                           " << endl;
             cout << "                                                                                                                        " << endl;
             cout << "                                          1.                    Morón                                                   " << endl;
             cout << "                                          2.                   Flores                                                   " << endl;
             cout << "                                          3.                    Once                                                    " << endl;
             cout << "                                                                                                                        " << endl;
            cout << "                                                                                                                         " << endl;
            cout << "                                                                                                                         "<< endl;
            cout << "                                          Elegí una opción:       " ; cin >> eleccion;
            for (int i = 0; i < 6; i++) 
            {cout << "                                                                                                                        " << endl;}
            
             // ---------------- si el usuario ingresa mal los datos -----------------

            while (cin.fail() || eleccion < 1 || eleccion > 3) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\n                                          Entrada inválida.  Intenta nuevamente:  ";
            cin >> eleccion;
        }
        cin.ignore(1000, '\n');

                 // -------------------------------------------------------------
                 
            cout << "                                                                                                                         " << endl;
            cout << "                                                                                                                         " << endl;
            cout << "                                                                                                                        " << endl;
        
            if (eleccion == 1) 
            { 

              gameover_moron = true;
              gameover = true;

            } else if (eleccion == 2) {

              gameover_flores = true;
              gameover = true;

            } else if ( eleccion == 3) {  

              ganaste = true;
              gameover = true;

            }

         
          
  
        
        //-------------------------- Pantalla colectivos ---------------------------
        }     
        else if (eleccion == 3)
        {                       

            cout << "                                                                                                                        " << endl;
            cout << "                                                                                                                        " << endl;
            cout << "                                                                                                                        " << endl;
            cout << "       .-------------------------------------------------------------.                                                  " << endl;
            cout << "      '------..-------------..----------..----------..----------..--.|                                                  " << endl;
            cout << "      |       \\\\            ||          ||          ||          ||  ||                                                " << endl;
            cout << "      |        \\\\           ||          ||          ||          ||  ||                                                " << endl;
            cout << "      |    ..   ||  _    _  ||    _   _ || _    _   ||    _    _||  ||                                                  " << endl;
            cout << "      |    ||   || //   //  ||   //  // ||//   //   ||   //   //|| /||                                                  " << endl;
            cout << "      |_.------\"''----------''----------''----------''----------''--'|                                                 " << endl;
            cout << "       |)|      |       |       |       |    |       57|      ||==|  |                                                  " << endl;
            cout << "       | |      |  _-_  |       |       |    |  .-.    |      ||==| C|                                                  " << endl;
            cout << "       | |  __  |.'.-.' |   _   |   _   |    |.'.-.'.  |  __  | \"__=='                                                 " << endl;
            cout << "       '---------'|( )|'----------------------'|( )|'----------\"\"                                                     " << endl;
            cout << "                   '-'                          '-'                                                                     " << endl;
            cout << "                                                   .-------------------------------------------------------------.      " << endl;
            cout << "                                                  '------..-------------..----------..----------..----------..--.|      " << endl;
            cout << "                                                  |       \\\\            ||          ||          ||          ||  ||    " << endl;
            cout << "                                                  |        \\\\           ||          ||          ||          ||  ||    " << endl;
            cout << "                                                  |    ..   ||  _    _  ||    _   _ || _    _   ||    _    _||  ||      " << endl;
            cout << "                                                  |    ||   || //   //  ||   //  // ||//   //   ||   //   //|| /||      " << endl;
            cout << "                                                  |_.------\"''----------''----------''----------''----------''--'|     " << endl;
            cout << "                                                   |)|      |       |       |       |    |      410|      ||==|  |      " << endl;
            cout << "                                                   | |      |  _-_  |       |       |    |  .-.    |      ||==| C|      " << endl;
            cout << "                                                   | |  __  |.'.-.' |   _   |   _   |    |.'.-.'.  |  __  | \"__=='     " << endl;
            cout << "                                                   '---------'|( )|'----------------------'|( )|'----------\"\"         " << endl;
            cout << "                                                               '-'                          '-'                         " << endl;
            cout << "     .-------------------------------------------------------------.                                                    " << endl;
            cout << "    '------..-------------..----------..----------..----------..--.|                                                    " << endl;
            cout << "    |       \\\\            ||          ||          ||          ||  ||                                                  " << endl;
            cout << "    |        \\\\           ||          ||          ||          ||  ||                                                  " << endl;
            cout << "    |    ..   ||  _    _  ||    _   _ || _    _   ||    _    _||  ||                                                    " << endl;
            cout << "    |    ||   || //   //  ||   //  // ||//   //   ||   //   //|| /||                                                    " << endl;
            cout << "    |_.------\"''----------''----------''----------''----------''--'|                                                   " << endl;
            cout << "     |)|      |       |       |       |    |      422|      ||==|  |                                                    " << endl;
            cout << "     | |      |  _-_  |       |       |    |  .-.    |      ||==| C|                                                    " << endl;
            cout << "     | |  __  |.'.-.' |   _   |   _   |    |.'.-.'.  |  __  | \"__=='                                                   " << endl;
            cout << "     '---------'|( )|'----------------------'|( )|'----------\"\"                                                       " << endl;
            cout << "                 '-'                          '-'                                                                       " << endl;
            cout << "                                                                                                                        " << endl;
            cout << "                                                                                                                        " << endl;
                    cout << " presiona ENTER para continuar.."; cin.ignore().get();
                    gameover_colectivo = true;
                    gameover = true;
                  }
        



        if (ganaste){
          final = 1;
        } else if (gameover_callejon){
          final = 2;
        } else if (gameover_colectivo){
          final = 3;
        } else if (gameover_flores){
          final = 4;
        } else if (gameover_moron){
          final = 5;
        }

        switch (final)
        {
        case 1:
          system("clear");
            cout << "                                                                                                             " << endl;
            cout << "                                                                                    ٩(ˊᗜˋ*)و ♡                          " << endl;
            cout << "                                                                                                                    " << endl;
            cout << "               ____                       _       _                                                             " << endl;
            cout << "              / ___| __ _ _ __   __ _ ___| |_ ___| |                                                            " << endl;
            cout << "             | |  _ / _` | '_ \\ / _` / __| __/ _ \\ |                                                            " << endl;
            cout << "             | |_| | (_| | | | | (_| \\__ \\ ||  __/_|                                                            " << endl;
            cout << "              \\____|\\__,_|_| |_|\\__,_|___/\\__\\___(_)                                                            " << endl;
            cout << "                                                                                                                " << endl;
            cout << "                    Llegaste perfectamente a casa!                                                             " << endl;
            cout << "                                                                                        =====      /  \\         " << endl;
            cout << "                                                                                       _|___|_____/ __ \\____________ " << endl;
            cout << "                                                                                      |::::::::::/ |  | \\:::::::::::| " << endl;
            cout << "                                                                                      |:::::::::/  ====  \\::::::::::| " << endl;
            cout << "                                                                                      |::::::::/__________\\:::::::::| " << endl;
            cout << "                                                                                      |_________|  ____  |__________| " << endl;
            cout << "                                                                                       | ______ | / || \\ | _______ |  " << endl;
            cout << "                                                                                       ||  |   || ====== ||   |   ||  " << endl;
            cout << "                                                                                       ||--+---|| |    | ||---+---||  " << endl;
            cout << "                                                                                       ||__|___|| |   o| ||___|___||  " << endl;
            cout << "                                                                                       |========| |____| |=========|  " << endl;
            cout << "                                                                                      (^^-^^^^^-|________|-^^^--^^^)  " << endl;
            cout << "                                                                                      (,, , ,, ,/________\\,,,, ,, ,) " << endl;
            cout << "                                                                                     ','',,,,' /__________\\,,,',',;; " << endl;
        
            cout << "Presione ENTER para continuar...";
            cin.ignore().get();            
          break;

        case 2: 
            system("clear");

          for (int i = 0; i < 8; i++) 
          {cout << "                                                                                                                        " << endl;}
            cout << "                 |  _ \\| ____|  _ \\|  _ \\_ _/ ___|_   _| ____|  _ / /                                                " << endl;
            cout << "                 | |_) |  _| | |_) | | | | |\\___ \\ | | |  _|   (_) |                                                  " << endl;
            cout << "                 |  __/| |___|  _ <| |_| | | ___) || | | |___   _| |                                                    " << endl;
            cout << "                 |_|   |_____|_| \\_\\____/___|____/ |_| |_____| (_) |                                                  " << endl;
            cout << "                                                                 \\_\\                                                 " << endl; 
            cout << "                                                                                  ⠀⣠⣶⣿⣿⣶⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
            cout << "                       Pasas por el callejon y te roban todo..                     ⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
            cout << "                                                                                  ⠀⠹⢿⣿⣿⡿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⡏⢀⣀⡀⠀⠀⠀⠀⠀" << endl;
            cout << "                                                                                  ⠀⠀⣠⣤⣦⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠿⣟⣋⣼⣽⣾⣽⣦⡀⠀⠀⠀" << endl;
            cout << "                                                                                  ⢀⣼⣿⣷⣾⡽⡄⠀⠀⠀⠀⠀⠀⠀⣴⣶⣶⣿⣿⣿⡿⢿⣟⣽⣾⣿⣿⣦⠀⠀" << endl;
            cout << "                                                                                  ⣸⣿⣿⣾⣿⣿⣮⣤⣤⣤⣤⡀⠀⠀⠻⣿⡯⠽⠿⠛⠛⠉⠉⢿⣿⣿⣿⣿⣷⡀" << endl;
            cout << "                                                                                  ⣿⣿⢻⣿⣿⣿⣛⡿⠿⠟⠛⠁⣀⣠⣤⣤⣶⣶⣶⣶⣷⣶⠀⠀⠻⣿⣿⣿⣿⣇" << endl;
            cout << "                                                                                  ⢻⣿⡆⢿⣿⣿⣿⣿⣤⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠟⠀⣠⣶⣿⣿⣿⣿⡟" << endl;
            cout << "                                                                                  ⠈⠛⠃⠈⢿⣿⣿⣿⣿⣿⣿⠿⠟⠛⠋⠉⠁⠀⠀⠀⠀⣠⣾⣿⣿⣿⠟⠋⠁⠀" << endl;
            cout << "                                                                                  ⠀⠀⠀⠀⠀⠙⢿⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿⣿⣿⠟⠁⠀⠀⠀⠀" << endl;
            cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⢸⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⠋⠀⠀⠀⠀⠀⠀" << endl;
            cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀" << endl;
            cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
            cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
            cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⣼⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
            cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⠻⣿⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
            cout << "Presione ENTER para continuar...";
            cin.ignore().get();
            break;

        case 3: 

           system("clear");
          for (int i = 0; i < 8; i++) 
           {cout << "                                                                                                                        " << endl;}
            cout << "                 |  _ \\| ____|  _ \\|  _ \\_ _/ ___|_   _| ____|  _ / /                                                " << endl;
            cout << "                 | |_) |  _| | |_) | | | | |\\___ \\ | | |  _|   (_) |                                                  " << endl;
            cout << "                 |  __/| |___|  _ <| |_| | | ___) || | | |___   _| |                                                    " << endl;
            cout << "                 |_|   |_____|_| \\_\\____/___|____/ |_| |_____| (_) |                                                  " << endl;
            cout << "                                                                 \\_\\                                                 " << endl; 
            cout << "                                                                                  ⠀⣠⣶⣿⣿⣶⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
            cout << "                           Esperaste el colectivo y nunca llego..                 ⠀⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
            cout << "                                                                                  ⠀⠹⢿⣿⣿⡿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⡏⢀⣀⡀⠀⠀⠀⠀⠀" << endl;
            cout << "                                                                                  ⠀⠀⣠⣤⣦⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠿⣟⣋⣼⣽⣾⣽⣦⡀⠀⠀⠀" << endl;
            cout << "                                                                                  ⢀⣼⣿⣷⣾⡽⡄⠀⠀⠀⠀⠀⠀⠀⣴⣶⣶⣿⣿⣿⡿⢿⣟⣽⣾⣿⣿⣦⠀⠀" << endl;
            cout << "                                                                                  ⣸⣿⣿⣾⣿⣿⣮⣤⣤⣤⣤⡀⠀⠀⠻⣿⡯⠽⠿⠛⠛⠉⠉⢿⣿⣿⣿⣿⣷⡀" << endl;
            cout << "                                                                                  ⣿⣿⢻⣿⣿⣿⣛⡿⠿⠟⠛⠁⣀⣠⣤⣤⣶⣶⣶⣶⣷⣶⠀⠀⠻⣿⣿⣿⣿⣇" << endl;
            cout << "                                                                                  ⢻⣿⡆⢿⣿⣿⣿⣿⣤⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠟⠀⣠⣶⣿⣿⣿⣿⡟" << endl;
            cout << "                                                                                  ⠈⠛⠃⠈⢿⣿⣿⣿⣿⣿⣿⠿⠟⠛⠋⠉⠁⠀⠀⠀⠀⣠⣾⣿⣿⣿⠟⠋⠁⠀" << endl;
            cout << "                                                                                  ⠀⠀⠀⠀⠀⠙⢿⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿⣿⣿⠟⠁⠀⠀⠀⠀" << endl;
            cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⢸⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⠋⠀⠀⠀⠀⠀⠀" << endl;
            cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀" << endl;
            cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
            cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
            cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⣼⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
            cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⠻⣿⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
            cout << "Presione ENTER para continuar...";
            cin.ignore().get();
            break;
        
        case 4: 

        system("clear");
          for (int i = 0; i < 8; i++) 
      {cout << "                                                                                                                        " << endl;}
        cout << "                 |  _ \\| ____|  _ \\|  _ \\_ _/ ___|_   _| ____|  _ / /                                                " << endl;
        cout << "                 | |_) |  _| | |_) | | | | |\\___ \\ | | |  _|   (_) |                                                  " << endl;
        cout << "                 |  __/| |___|  _ <| |_| | | ___) || | | |___   _| |                                                    " << endl;
        cout << "                 |_|   |_____|_| \\_\\____/___|____/ |_| |_____| (_) |                                                  " << endl;
        cout << "                                                                 \\_\\                                                 " << endl; 
        cout << "                                                                                  ⠀⣠⣶⣿⣿⣶⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        cout << "                           No tuviste que bajar en flores..                       ⠀⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        cout << "                                                                                  ⠀⠹⢿⣿⣿⡿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⡏⢀⣀⡀⠀⠀⠀⠀⠀" << endl;
        cout << "                                                                                  ⠀⠀⣠⣤⣦⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠿⣟⣋⣼⣽⣾⣽⣦⡀⠀⠀⠀" << endl;
        cout << "                                                                                  ⢀⣼⣿⣷⣾⡽⡄⠀⠀⠀⠀⠀⠀⠀⣴⣶⣶⣿⣿⣿⡿⢿⣟⣽⣾⣿⣿⣦⠀⠀" << endl;
        cout << "                                                                                  ⣸⣿⣿⣾⣿⣿⣮⣤⣤⣤⣤⡀⠀⠀⠻⣿⡯⠽⠿⠛⠛⠉⠉⢿⣿⣿⣿⣿⣷⡀" << endl;
        cout << "                                                                                  ⣿⣿⢻⣿⣿⣿⣛⡿⠿⠟⠛⠁⣀⣠⣤⣤⣶⣶⣶⣶⣷⣶⠀⠀⠻⣿⣿⣿⣿⣇" << endl;
        cout << "                                                                                  ⢻⣿⡆⢿⣿⣿⣿⣿⣤⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠟⠀⣠⣶⣿⣿⣿⣿⡟" << endl;
        cout << "                                                                                  ⠈⠛⠃⠈⢿⣿⣿⣿⣿⣿⣿⠿⠟⠛⠋⠉⠁⠀⠀⠀⠀⣠⣾⣿⣿⣿⠟⠋⠁⠀" << endl;
        cout << "                                                                                  ⠀⠀⠀⠀⠀⠙⢿⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿⣿⣿⠟⠁⠀⠀⠀⠀" << endl;
        cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⢸⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⠋⠀⠀⠀⠀⠀⠀" << endl;
        cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀" << endl;
        cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⣼⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⠻⣿⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;

      cout << "Presione ENTER para continuar...";
      cin.ignore().get();  
        break;

        case 5: 

          system("clear");
          for (int i = 0; i < 8; i++) 
      {cout << "                                                                                                                        " << endl;}
        cout << "                 |  _ \\| ____|  _ \\|  _ \\_ _/ ___|_   _| ____|  _ / /                                                " << endl;
        cout << "                 | |_) |  _| | |_) | | | | |\\___ \\ | | |  _|   (_) |                                                  " << endl;
        cout << "                 |  __/| |___|  _ <| |_| | | ___) || | | |___   _| |                                                    " << endl;
        cout << "                 |_|   |_____|_| \\_\\____/___|____/ |_| |_____| (_) |                                                  " << endl;
        cout << "                                                                 \\_\\                                                 " << endl; 
        cout << "                                                                                  ⠀⣠⣶⣿⣿⣶⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        cout << "                           no deberias haberte bajado en moron.                   ⠀⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        cout << "                                                                                  ⠀⠹⢿⣿⣿⡿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⡏⢀⣀⡀⠀⠀⠀⠀⠀" << endl;
        cout << "                                                                                  ⠀⠀⣠⣤⣦⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠿⣟⣋⣼⣽⣾⣽⣦⡀⠀⠀⠀" << endl;
        cout << "                                                                                  ⢀⣼⣿⣷⣾⡽⡄⠀⠀⠀⠀⠀⠀⠀⣴⣶⣶⣿⣿⣿⡿⢿⣟⣽⣾⣿⣿⣦⠀⠀" << endl;
        cout << "                                                                                  ⣸⣿⣿⣾⣿⣿⣮⣤⣤⣤⣤⡀⠀⠀⠻⣿⡯⠽⠿⠛⠛⠉⠉⢿⣿⣿⣿⣿⣷⡀" << endl;
        cout << "                                                                                  ⣿⣿⢻⣿⣿⣿⣛⡿⠿⠟⠛⠁⣀⣠⣤⣤⣶⣶⣶⣶⣷⣶⠀⠀⠻⣿⣿⣿⣿⣇" << endl;
        cout << "                                                                                  ⢻⣿⡆⢿⣿⣿⣿⣿⣤⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠟⠀⣠⣶⣿⣿⣿⣿⡟" << endl;
        cout << "                                                                                  ⠈⠛⠃⠈⢿⣿⣿⣿⣿⣿⣿⠿⠟⠛⠋⠉⠁⠀⠀⠀⠀⣠⣾⣿⣿⣿⠟⠋⠁⠀" << endl;
        cout << "                                                                                  ⠀⠀⠀⠀⠀⠙⢿⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿⣿⣿⠟⠁⠀⠀⠀⠀" << endl;
        cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⢸⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⠋⠀⠀⠀⠀⠀⠀" << endl;
        cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀" << endl;
        cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⣼⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        cout << "                                                                                  ⠀⠀⠀⠀⠀⠀⠻⣿⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;

      cout << "Presione ENTER para continuar...";
      cin.ignore().get();
       
        default:
          cout <<"Testing"<<endl;
          break;
        }

            break; // breaK FINAL
  

        case 2:
            system("clear");
            cout << "\nJuego hecho e ideado por Juan Cruz Rivero, Tobias Gorschin, Nilo Moran, Camila Jara.\n" << endl;
            for (int i = 0; i < 3; i++) 
            {
                cout << "                                                                                                                        " << endl;
            }
            cout << " presiona ENTER para volver...";
            cin.get();
            break;

        case 3:
            system("clear");
            salir_del_juego = true;
            break;
        } 
      

    }

      system("clear");
      cout << "Gracias por jugar." << endl;
  
  }
      }

     
  
    

    
        

      
  
 
  
