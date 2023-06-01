#include <Servo.h>
//Definiendo Servos
Servo P1;
Servo P2; 

 void setup () 
 {

 }

void loop()
{

}

void Incializacion_Sistema_Panel (){
  P1.attach(10);
  P1.write(0);
  P2.attach(9);
  P2.write(0);
  delay(500);
}

void Redireccionar_Panel (){
 P1.write(180);
 delay(500);
 P2.write(180);
 delay(500);
 P1.write(0);
 delay(500);
 P2.write(0);
 delay(500);
}

