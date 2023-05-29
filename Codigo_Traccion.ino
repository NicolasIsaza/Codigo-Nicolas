#include <Servo.h>
Servo TG1;
Servo TG2;
Servo TG3;
Servo TG4;
Servo TP5;
Servo TP6;

void setup() {
}

void loop() {
}
  
void Inicializar_Servos(){
  TG1.attach(16);
  TG2.attach(17);
  TG3.attach(18);
  TG4.attach(19);
  TP5.attach(20);
  TP6.attach(21);
  P1.attach(22);
  P2.attach(23);
}

void PrimeraTraccion (int Tiempo, int Velocidad){ // Sentido Horario 0° / Sentido Anti-Horario 180°
  TG1.write(Velocidad*0.7333);
  TG2.write(Velocidad*0.7333);
  TG3.write(Velocidad*0.7333);
  TG4.write(Velocidad*0.7333);
  TP5.write(Velocidad);
  TP6.write(Velocidad);
  delay (Tiempo);
  TG1.write(90);
  TG2.write(90);
  TG3.write(90);
  TG4.write(90);
  TP5.write(90);
  TP6.write(90);
}

void SegundaTraccion (int Tiempo, int Velocidad1, int Velocidad2){ // Sentido Horario 0° / Sentido Anti-Horario 180°, En este caso se utilizan dos varibles, una por tren
  TG1.write(Velocidad1*0.7333);
  TG2.write(Velocidad1*0.7333);
  TG3.write(Velocidad1*0.7333);
  TG4.write(Velocidad2*0.7333);
  TP5.write(Velocidad2);
  TP6.write(Velocidad2);
  delay (Tiempo);
  TG1.write(90);
  TG2.write(90);
  TG3.write(90);
  TG4.write(90);
  TP5.write(90);
  TP6.write(90);
}

void Izquierda (){
  TG1.write(0);
  TG2.write(0);
  TG3.write(0);
  TG4.write(0);
  TP5.write(0);
  TP6.write(0);
}

void Derecha (){
  TG1.write(180);
  TG2.write(180);
  TG3.write(180);
  TG4.write(180);
  TP5.write(180);
  TP6.write(180);
}

void Atras (){
  TG1.write(0);
  TG2.write(0);
  TG3.write(180);
  TG4.write(180);
  TP5.write(180);
  TP6.write(0);
}

void Adelante (){
  TG1.write(180);
  TG2.write(180);
  TG3.write(0);
  TG4.write(0);
  TP5.write(0);
  TP6.write(180);
}

void Parar (){
  TG1.write(90);
  TG2.write(90);
  TG3.write(90);
  TG4.write(90);
  TP5.write(90);
  TP6.write(90); 
}
void Presentarse(){
  Izquierda ();
  delay(700);
  Derecha();
  delay(700);
  Izquierda ();
  delay(700);
  Derecha();
  delay(700);
  Parar();
}
