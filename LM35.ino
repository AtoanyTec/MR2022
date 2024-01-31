int sensort = A0; //Pin Analogico que conecta al sensor de Temperatura.
int valt = 0; //Variable que lee el pin Analógico del Sensor de Temperatura en Mv.
int valtfinal = 0; //Variable de Temperatura en °C

void setup() {
pinMode (sensort, INPUT);
Serial.begin(9600);
}

void loop() 
{
  temperatura ();
}


void temperatura()
{
  valt = analogRead(sensort);
  valtfinal = (valt/5);
  Serial.print ("Temperatura = ");
  Serial.println (valtfinal);
}
