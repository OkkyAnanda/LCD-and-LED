#include <LCD.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h>

#define I2C_ADDR 0x27
#define BACKLIGHT_PIN 3
#define En_pin 2
#define Rw_pin 1
#define Ra_pin 0
#define D4_pin 4
#define D5_pin 5
#define D6_pin 6
#define D7_pin 7

LiquidCrystal_I2C
lcd(I2C_ADDR, En_pin, Rw_pin, Ra_pin, D4_pin, D5_pin, D6_pin, D7_pin);

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.setBacklightPin(BACKLIGHT_PIN,POSITIVE);
lcd.setBacklight(HIGH);

pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(1,0);
lcd.print("    NAMA    ");
lcd.setCursor(0,1);
lcd.print(" OKKY SUPIT A ");
delay(2000);
lcd.clear();

lcd.setCursor(1,0);
lcd.print(" INTERACTIVE ");
lcd.setCursor(0,1);
lcd.print(" ROBOTIC  CLUB  ");
delay(2000);
lcd.clear();

lcd.setCursor(1,0);
lcd.print("    LAMPU  ");
lcd.setCursor(0,1);
lcd.print(" MERAH MENYALA ");
delay(1000);
digitalWrite(5,HIGH);
delay(1000);
digitalWrite(5,LOW);
delay(0);
lcd.clear();


lcd.setCursor(1,0);
lcd.print("    LAMPU ");
lcd.setCursor(0,1);
lcd.print(" HIJAU MENYALA ");
delay(1000);
digitalWrite(6,HIGH);
delay(1000);
digitalWrite(6,LOW);
delay(0);
lcd.clear();

lcd.setCursor(1,0);
lcd.print("    LAMPU ");
lcd.setCursor(0,1);
lcd.print(" BIRU MENYALA ");
delay(1000);
digitalWrite(7,HIGH);
delay(1000);
digitalWrite(7,LOW);
delay(0);
lcd.clear();

lcd.setCursor(1,0);
lcd.print(" FLIP FLOP ");
delay(1000);

digitalWrite(5,HIGH);
delay(100);
digitalWrite(5,LOW);
delay(100);

digitalWrite(6,HIGH);
delay(100);
digitalWrite(6,LOW);
delay(100);

digitalWrite(7,HIGH);
delay(100);
digitalWrite(7,LOW);
delay(100);

digitalWrite(5,HIGH);
delay(100);
digitalWrite(5,LOW);
delay(100);

digitalWrite(6,HIGH);
delay(100);
digitalWrite(6,LOW);
delay(100);

digitalWrite(7,HIGH);
delay(100);
digitalWrite(7,LOW);
delay(100);

digitalWrite(5,HIGH);
delay(100);
digitalWrite(5,LOW);
delay(100);

digitalWrite(6,HIGH);
delay(100);
digitalWrite(6,LOW);
delay(100);

digitalWrite(7,HIGH);
delay(100);
digitalWrite(7,LOW);
delay(100);

digitalWrite(5,HIGH);
delay(100);
digitalWrite(5,LOW);
delay(100);

digitalWrite(6,HIGH);
delay(100);
digitalWrite(6,LOW);
delay(100);

digitalWrite(7,HIGH);
delay(100);
digitalWrite(7,LOW);
delay(100);

lcd.setCursor(1,0);
lcd.print("    FINISH  ");
digitalWrite(5,HIGH);
delay(100);
digitalWrite(5,LOW);
delay(100);

digitalWrite(6,HIGH);
delay(100);
digitalWrite(6,LOW);
delay(100);

digitalWrite(7,HIGH);
delay(100);
digitalWrite(7,LOW);
delay(100);

lcd.setCursor(0,1);
lcd.print("    HORRE :v  ");
digitalWrite(5,HIGH);
delay(100);
digitalWrite(5,LOW);
delay(100);

digitalWrite(6,HIGH);
delay(100);
digitalWrite(6,LOW);
delay(100);

digitalWrite(7,HIGH);
delay(100);
digitalWrite(7,LOW);
delay(100);

delay(2000);

lcd.clear();

}


