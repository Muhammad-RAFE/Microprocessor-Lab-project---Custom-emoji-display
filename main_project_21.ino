#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 7, 6, 5, 4); 
void setup()
{
    lcd.begin(16, 2);
}
void loop()
{



    image01();
    delay(500);
    image02();
    delay(700);

}





void image01()
{
    lcd.clear();

    byte image24[8] = {B01010, B10100, B01011, B10101, B11010, B10101, B11010, B01110};
    byte image25[8] = {B00000, B00000, B00000, B10000, B10000, B00000, B00000, B00000};
    byte image23[8] = {B01101, B01010, B01101, B00111, B00000, B00000, B00000, B00000};
    byte image07[8] = {B00000, B00000, B00000, B00000, B00000, B00000, B00001, B00011};
    byte image08[8] = {B00000, B00000, B00000, B00000, B00000, B00000, B00000, B10000};

    lcd.createChar(0, image24);
    lcd.createChar(1, image25);
    lcd.createChar(2, image23);
    lcd.createChar(3, image07);
    lcd.createChar(4, image08);

    lcd.setCursor(7, 1);
    lcd.write(byte(0));
    lcd.setCursor(8, 1);
    lcd.write(byte(1));
    lcd.setCursor(6, 1);
    lcd.write(byte(2));
    lcd.setCursor(6, 0);
    lcd.write(byte(3));
    lcd.setCursor(7, 0);
    lcd.write(byte(4));
}

void image02()
{
    lcd.clear();

    byte image08[8] = {B00000, B00100, B01010, B01010, B10001, B00011, B00110, B01100};
    byte image07[8] = {B00000, B00000, B00000, B00000, B00001, B00010, B00010, B00001};
    byte image09[8] = {B00000, B00000, B10000, B11000, B00000, B00000, B11000, B00100};
    byte image24[8] = {B00100, B00100, B00011, B00000, B00000, B00000, B00000, B00000};
    byte image25[8] = {B10000, B00000, B00000, B00000, B00000, B00000, B00000, B00000};

    lcd.createChar(0, image08);
    lcd.createChar(1, image07);
    lcd.createChar(2, image09);
    lcd.createChar(3, image24);
    lcd.createChar(4, image25);

    lcd.setCursor(7, 0);
    lcd.write(byte(0));
    lcd.setCursor(6, 0);
    lcd.write(byte(1));
    lcd.setCursor(8, 0);
    lcd.write(byte(2));
    lcd.setCursor(7, 1);
    lcd.write(byte(3));
    lcd.setCursor(8, 1);
    lcd.write(byte(4));
}

