/*Escriba un fragmento de programa que intercambie los valores de dos variables */

#include <Arduino.h>
#include <mat.h>

void setup() {
  int x, y, aux = 0;

  Serial.println("Digita el primer numero"); 
  x = Serial.read();
  Serial.println("Digita el segundo numero"); 
  y = Serial.read();

  aux = x;
  x = y;
  y = aux; 

 Serial.print("Ahora 'X' vale ");
 Serial.println(x);
 Serial.print("Ahora 'Y' vale ");
 Serial.println(x);
}

void loop() {
  
}
