#include "Laberinto.h"
#include <cstring>

void Laberinto::draw() {
    for (int y = 0; y < m_alto; y++) {
        mvprintw(y, 0, "%s", m_mapa[y]);
    }
}

bool Laberinto::esPared(int x, int y) {
    if (x >= 0 && x < m_ancho && y >= 0 && y < m_alto) {
        return m_mapa[y][x] == '#';
    }
    return true;
}

void Laberinto::loadMap(int nivel) {
    for (int y = 0; y < m_alto; y++) {
        strcpy(m_mapa[y], m_mapas[nivel][y]);
    }
}