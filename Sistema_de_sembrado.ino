#include <Stepper.h>
int PerforarT = 2000;
const int stepsPerRevolutionS = 200;
Stepper StepperSembrado(stepsPerRevolutionS, 8, 9, 10, 11);
const int stepsPerRevolutionP = 200;
Stepper StepperPerforacion(stepsPerRevolutionP, 7, 6, 5, 4);

void setup (){
  StepperSembrado.setSpeed(60);
  StepperPerforacion.setSpeed(60);
  pinMode(14, OUTPUT);
}

void Sembrar (){
  StepperSembrado.step(stepsPerRevolutionS);
  delay(500);
}

void Perforar (){
  StepperPerforacion.step(stepsPerRevolutionP);
  digitalWrite(14, HIGH);
  delay(PerforarT);
}

void loop (){
}
