/*9. Cambiar un numero entero con el mismo valor pero en romanos

M = 1000
D = 500
C = 100
L = 50 
X = 10
I = 1

*/

#include <Arduino.h>

int num, unidades, decenas, centenas, miles = 0;

void setup() {
  Serial.print("Digite un numero: ");
  num = Serial.read();
  //2152
  unidades = num%10; num/=10; //unidades = 2; num = 215
  decenas  = num%10; num/=10; //decenas  = 5; num = 21
  centenas = num&10; num/=10; //centenas = 1; num = 2
  miles    = num&10; num/=10; //miles = 2; num = 0

 switch(miles){

    case  1: Serial.print("M"); break;
    case  2: Serial.print("MM"); break;
    case  3: Serial.print("MMM"); break;
 }

 switch(centenas){

    case  1: Serial.print("C");break;
    case  2: Serial.print("CC");break;
    case  3: Serial.print("CCC");break;
    case  4: Serial.print("CD");break;
    case  5: Serial.print("D");break;
    case  6: Serial.print("DC");break;
    case  7: Serial.print("DCC");break;
    case  8: Serial.print("DCCC");break;
    case  9: Serial.print("CM");break;
 }

 switch(decenas){

    case  1: Serial.print("X");break;
    case  2: Serial.print("XX");break;
    case  3: Serial.print("XXX");break;
    case  4: Serial.print("XL");break;
    case  5: Serial.print("L");break;
    case  6: Serial.print("LX");break;
    case  7: Serial.print("LXX");break;
    case  8: Serial.print("LXXX");break;
    case  9: Serial.print("XC");break;
 } 

 switch(unidades){

    case  1: Serial.print("I");break;
    case  2: Serial.print("II");break;
    case  3: Serial.print("III");break;
    case  4: Serial.print("IV");break;
    case  5: Serial.print("V");break;
    case  6: Serial.print("VI");break;
    case  7: Serial.print("VII");break;
    case  8: Serial.print("VIII");break;
    case  9: Serial.print("IX");break;
 }
}

void loop() {

}