#ifndef HOUSE_H
#define HOUSE_H

//Includes for DHT11
#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11

//Includes for LiquidCrystal_I2C
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

class House
{
public:
  House();
  void init();
  float get_temp() const;
  bool detect_motion() const;
  void display_temp();

  template <typename T>
  void print(const T &in)
  {
    lcd.setCursor(0,0);
    lcd.print(in);
  }


private:
  DHT temp_sensor;
  LiquidCrystal_I2C lcd;
  const int pir_pin;
};

//RGB class
class rgb_led
{
  public:
    rgb_led(const int &r, const int &g, const int &b)
    : red_pin(r), green_pin(g), blue_pin(b)
    {
      Serial.println("constructor");
      pinMode(r, OUTPUT);
      pinMode(g, OUTPUT);
      pinMode(b, OUTPUT);
    }

    void glow(const int &r, const int &g, const int &b) const
    {
      analogWrite(red_pin, r);
      analogWrite(green_pin, g);
      analogWrite(blue_pin, b);
    }

    void turn_off()const
    {
      glow(0,0,0);
    }

  private:
    const int red_pin;
    const int green_pin;
    const int blue_pin;

};


#endif
