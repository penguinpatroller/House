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




#endif
