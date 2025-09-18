#include "Nave.h"
#include <ncurses.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////

// Método para inicializar la posición de la nave

void Nave::setup(int ancho, int alto)
{
    m_x = (ancho * 50) / 100 - 2;  // centro horizontal
    m_y = (alto * 50) / 100;       // centro vertical

    m_energia = 1;
    m_vidas = 3;
    m_explotar = false;
    m_direccion = DERECHA;

    m_prevX = m_x;
    m_prevY = m_y;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////

void Nave::update()
{
    if (m_energia <= 0)
    {
        m_explotar = true;
        m_vidas--;
        m_energia = 3;
    }
}

// Método para dibujar la nave en pantalla con ncurses

void Nave::draw()
{
    mvaddch(m_prevY, m_prevX, ' ');

    if (!m_explotar)
    {
        char raton_char;
        switch (m_direccion) {
            case ARRIBA:
                raton_char = '^';
                break;
            case ABAJO:
                raton_char = 'v';
                break;
            case IZQUIERDA:
                raton_char = '<';
                break;
            case DERECHA:
                raton_char = '>';
                break;
        }
        mvaddch(m_y, m_x, raton_char);
    }

    m_prevX = m_x;
    m_prevY = m_y;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////

// Accesors

void Nave::setX(int x) { m_x = x; }
void Nave::setY(int y) { m_y = y; }
int Nave::getX() { return m_x; }
int Nave::getY() { return m_y; }

void Nave::setEnergia(int energia) {m_energia = energia; }
int Nave::getEnergia() { return m_energia; }

void Nave::setVidas(int vidas) {m_vidas = vidas;}
int Nave::getVidas() { return m_vidas; }

void Nave::setDireccion(Direccion dir) {
    m_direccion = dir;
}

Direccion Nave::getDireccion() {
    return m_direccion;
}