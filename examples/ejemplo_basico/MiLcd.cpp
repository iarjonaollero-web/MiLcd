#include"MiLcd.h"

MiLcd::MiLcd(int rs , int E , int D4 , int D5 , int D6 , int D7)
{
    _rs = rs;
    _E  = E ;
    _D4 = D4;
    _D5 = D5;
    _D6 = D6;
    _D7 = D7;

    pinMode(rs, OUTPUT);
    pinMode(E, OUTPUT);
    pinMode(D4, OUTPUT);
    pinMode(D5, OUTPUT);
    pinMode(D6, OUTPUT);
    pinMode(D7, OUTPUT);

}

void Pulso()
{
    
}
