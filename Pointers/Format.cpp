#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup()
{

    pinMode(A0, INPUT);
    pinMode(A1, INPUT);
    pinMode(A4, INPUT);
    pinMode(A5, INPUT);
    pinMode(6, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(13, OUTPUT);

    lcd.init();

    lcd.backlight();

    Serial.begin(9600);
}

void blink()
{
    digitalWrite(6, HIGH);
    delay(30);
    digitalWrite(6, LOW);
    delay(30);
    digitalWrite(8, HIGH);
    delay(30);
    digitalWrite(8, LOW);
    delay(30);
    digitalWrite(11, HIGH);
    delay(30);
    digitalWrite(11, LOW);
    delay(30);
    digitalWrite(13, HIGH);
    delay(30);
    digitalWrite(13, LOW);
    delay(30);

    digitalWrite(13, HIGH);
    delay(30);
    digitalWrite(13, LOW);
    delay(30);
    digitalWrite(11, HIGH);
    delay(30);
    digitalWrite(11, LOW);
    delay(30);
    digitalWrite(8, HIGH);
    delay(30);
    digitalWrite(8, LOW);
    delay(30);
    digitalWrite(6, HIGH);
    delay(30);
    digitalWrite(6, LOW);
    delay(30);

    digitalWrite(6, HIGH);
    delay(30);
    digitalWrite(6, LOW);
    delay(30);
    digitalWrite(8, HIGH);
    delay(30);
    digitalWrite(8, LOW);
    delay(30);
    digitalWrite(11, HIGH);
    delay(30);
    digitalWrite(11, LOW);
    delay(30);
    digitalWrite(13, HIGH);
    delay(30);
    digitalWrite(13, LOW);
    delay(30);

    digitalWrite(13, HIGH);
    delay(30);
    digitalWrite(13, LOW);
    delay(30);
    digitalWrite(11, HIGH);
    delay(30);
    digitalWrite(11, LOW);
    delay(30);
    digitalWrite(8, HIGH);
    delay(30);
    digitalWrite(8, LOW);
    delay(30);
    digitalWrite(6, HIGH);
    delay(30);
    digitalWrite(6, LOW);
    delay(30);

    delay(30);
    digitalWrite(13, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(6, HIGH);
    delay(30);

    digitalWrite(13, LOW);
    digitalWrite(11, LOW);
    digitalWrite(8, LOW);
    digitalWrite(6, LOW);
    delay(30);
    delay(30);
    digitalWrite(13, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(6, HIGH);
    delay(30);

    digitalWrite(13, LOW);
    digitalWrite(11, LOW);
    digitalWrite(8, LOW);
    digitalWrite(6, LOW);
    delay(30);
    delay(30);
    digitalWrite(13, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(6, HIGH);
    delay(30);

    digitalWrite(13, LOW);
    digitalWrite(11, LOW);
    digitalWrite(8, LOW);
    digitalWrite(6, LOW);
    delay(30);
    delay(30);
    digitalWrite(13, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(6, HIGH);
    delay(30);

    digitalWrite(13, LOW);
    digitalWrite(11, LOW);
    digitalWrite(8, LOW);
    digitalWrite(6, LOW);
    delay(30);
}

void loop()
{

    float y = analogRead(A0);
    float z = analogRead(A1);

    float gas = (y * 100) / 1023;
    float co = (z * 100) / 1023;

    lcd.setCursor(2, 0);
    lcd.print("Pollution:");
    lcd.setCursor(13, 0);
    lcd.print(gas);
    lcd.setCursor(18, 0);
    lcd.print("%");

    lcd.setCursor(2, 2);
    lcd.print("CO:");
    lcd.setCursor(6, 2);
    lcd.print(co);
    lcd.setCursor(11, 2);
    lcd.print("%");

    if (gas > 10.00)
    {
        blink();
    }
    delay(500);
}
