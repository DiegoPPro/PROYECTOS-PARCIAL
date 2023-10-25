/* 7. Defina una estructura que indique el tiempo empleado por un ciclista en 
      una etapa. La estructura debe tener tres campos: horas, minutos y segundos.
      Escriba un programa que dado n etapas calcule el tiempo total empleado en
      correr todas las etapas */

#include <Arduino.h>
#include <DataCapture.h>

struct Etapas{
  int horas, minutos, segundos;
  
}etapa[100];

void setup() {
  int horasT = 0, minT = 0, segT = 0;
  int n_etapas = DataCapture::captureInteger("Digite numero de etapas:");

  for ( int i=0; i<n_etapas; i++){
      // pidiendo los datos al usuario 
      etapa[i].horas = DataCapture::captureInteger("Digite horas");
      etapa[i].minutos = DataCapture::captureInteger("Digite horas");
      etapa[i].segundos= DataCapture::captureInteger("Digite horas");
      
      horasT= horasT + etapa[i].horas;

      minT = minT + etapa[i].minutos;
      if(minT >= 60){
        minT -= 60;
        horasT++;
      }

      segT = segT + etapa[i].segundos;
      if (segT >= 60){
        segT -= 60;
        minT++;
      }
  }

  Serial.println("\n Tiempo total del corredor \n");
  Serial.println("Horas: "+String(horasT));
  Serial.println("Minutos: "+String(minT));
  Serial.println("Segundos: "+String(segT));
}
void loop() {
  
}