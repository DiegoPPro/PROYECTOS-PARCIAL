// Busqueda secuencial 

// a[5] = {3,4,2,1,5}; dato = 4 

#include <Arduino.h>

void setup() {
  int a[] = {3,4,2,1,5}; 
  int i, dato; // i seria el recorrido que va hacer la busqueda
  char band = 'F'; // Evaluacion de si existe o no en el arreglo 

  dato = 4; // El dato que debe evaluar 

  i = 0;
  while((band == 'F') && (i<5)){
    if(a[i]== dato){
      band = 'V';
    }
    i++; // para ir cambiando la posicion 
  }

  if(band == 'F'){
      Serial.println("El numero a buscar no existe en el arreglo");
  }
  else if(band == 'V'){
      Serial.println("El numero ha sido encontrado en la posicion :"+String(i-1)); // se añade por el aumento en i del while
  }
}

void loop() {
  
}

