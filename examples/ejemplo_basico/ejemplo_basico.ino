#include "MiLcd.h"

MiLcd lcd(12, 11, 5, 4, 3, 2);  // rs, E, D4, D5, D6, D7

void setup()
{
    lcd.comenzarLcd(2, 16);
    lcd.escribirTexto("Hola Mundo!");

    lcd.colocarCursor(1, 0);
    lcd.escribirTexto("MiLcd v1.0");
}

void loop()
{
}
