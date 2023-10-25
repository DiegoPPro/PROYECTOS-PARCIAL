// 9. Escriba un progrma que calcule el valor de: 1*2*3*...*n (factorial)
// 5! = 5*4*3*2*1
#include <Arduino.h>
#include <DataCapture.h>

void setup() {
    int factorial =1;
    int num = DataCapture::captureInteger("Ingrese el numero que desea saber el factorial");

    for(int i; i<=num;i++){
      factorial *= i;
    }

    Serial.println("El factorial de ese numero es: "+ String (factorial));
}

void loop() {
  
}

