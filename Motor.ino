//Pines para el motor
int in1 = 3;
int in2 = 4;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void loop() {
  //Giro en un sentido
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  delay(300);

  //Paro
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  delay(300);

  //Giro en otro sentido
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  delay(300);

}
