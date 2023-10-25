#include <Arduino.h>
#include <DataCapture.h>

int sumar(int);

void setup() {
  int numElementos;
  
  do{
   int numElementos = DataCapture :: captureInteger("Ingrese el numero de los elementos");
  }while(numElementos <=0);

  Serial.println("La Suma de los elementos es: "+ int (sumar(numElementos)));
}

int sumar (int n){
  int suma = 0;

  if(n==1){ 
    suma = 1;
  }
  else{
    suma=n+sumar(n-1);
  }
}
void loop() {
  
}

