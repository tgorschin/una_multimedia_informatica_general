#pragma once
#include <iostream>
#include <ncurses.h>

enum Direccion {
    ARRIBA,
    ABAJO,
    IZQUIERDA,
    DERECHA
};

class Nave {
public:
    void setup(int alto, int ancho);
    void update();
    
    void draw();
    void setDireccion(Direccion dir);
    Direccion getDireccion();

    void setX(int x);
    void setY(int y);
    int getX();
    int getY();

    void setEnergia(int energia);
    int getEnergia();

    void setVidas(int vidas);
    int getVidas();

private:
    int m_x, m_y; 
    int m_energia;
    int m_vidas;
    bool m_explotar;
    Direccion m_direccion;

    int m_prevX, m_prevY;
};