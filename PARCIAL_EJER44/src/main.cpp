#include <Arduino.h>

void setup() {
  char cad1[] = "Esto es una cadena";
  char cad2[] = "de ejemplo";
  char cad3[30];

  strcpy(cad3,cad1);
  strcat(cad3,cad2);

  Serial.println(cad3);
}
void loop() {
  
}
