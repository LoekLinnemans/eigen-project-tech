#include <Arduino.h>
#include "Display.h"
#include "DHT11.h"


void setup() {
  Serial.begin (9600);

}
void loop() 
{

 Display.show("1234");
}