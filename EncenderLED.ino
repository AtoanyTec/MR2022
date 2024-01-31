//Encender un LED
//Atoany Fierro

//Definición de pines
int LED = 8;

void setup() {
  //Configuración del pin como salida
  pinMode(LED, OUTPUT);

}

void loop() {
  //Encendido de LED
  digitalWrite(LED, HIGH);
}
