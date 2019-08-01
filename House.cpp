#include "House.h"

House::House()
:temp_sensor(DHTPIN, DHTTYPE), lcd(0x27, 16, 2), pir_pin(12)
{}

float House::get_temp() const
{
  float temp = temp_sensor.readTemperature(true);
  return temp;
}

bool House::detect_motion() const
{
  int pir_val = digitalRead(pir_pin);
  return (pir_val == 1);
}

void House::init()
{
  //Initialize sensors
  temp_sensor.begin();

  //Initialize the LCD screen
  lcd.init();
  lcd.backlight();
  lcd.begin(16,2);
}

void House::display_temp()
{
  lcd.setCursor(0,0);
  lcd.print("Temp: ");
  lcd.print(get_temp());
  lcd.setCursor(0,0);
}
