#ifndef MiLcd_H
#define MiLcd_H

#include<Arduino.h>

class MiLcd 
{
    public:
    MiLcd(int _rs ,int _E ,int _D4 ,int _D5 ,int _D6 ,int _D7);
    void comenzarLcd(int fil,int col);
    void colocarCursor(int fil,int col);
    void limpiar();
    void parpadearCursor();
    void mostrarCursor();
    void escribirTexto(String texto);

    private:
    int _rs , _E , _D4 , _D5 , _D6 , _D7;
    void enviarByte();
    void enviarNibble();
    void Pulso();
};

