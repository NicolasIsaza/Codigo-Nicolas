const int s0 = 44;
const int s1 = 42;
const int s2 = 40;
const int s3 = 38;
const int out = 36;

void setup()   
{  
  Serial.begin(9600);
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  pinMode(out, INPUT);

  digitalWrite(s0, HIGH);
  digitalWrite(s1, HIGH);


}  
    
void Respaldo_Sembrar() 
{ 
int R = getRojo();
delay(200);
int V = getVerde();
delay(200);
int A = getAzul();
delay(200);

Serial.print("Int R "+ String(R));
Serial.print("  --  Int V "+ String(V));
Serial.print("  --  Int Z "+ String(A));

  if (R >= 67 && V >=72 && A >=51) {
    Serial.print(" APTO PARA PLANTAR");
  }
  else
  {
    Serial.print("  NO APTO PARA PLANTAR");
  }
}  
    
int getRojo(){
  //leer color rojo
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);
  int ROJO = pulseIn(out, LOW);
  return ROJO;
}

int getAzul(){
  //leer color azul
  digitalWrite(s2, LOW);
  digitalWrite(s3, HIGH);
  int AZUL = pulseIn(out, LOW);
  return AZUL;
}

int getVerde(){
  //leer color verde
  digitalWrite(s2, HIGH);
  digitalWrite(s3, HIGH);
  int VERDE = pulseIn(out, LOW);
  return VERDE;
}

void loop(){
}
