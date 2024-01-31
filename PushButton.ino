//Encender un LED
//Atoany Fierro

//Definición de pines
int button = 8;

//Definición de variables
int var_button = 0;

void setup() {
  //Configuración del pin como entrada
  pinMode(button, INPUT);

  //Configuración del monitor serial
  Serial.begin(9600);

}

void loop() {
  //Leer el boton
  var_button = digitalRead(button);

  if(var_button == 1)
  {
    Serial.println("Botón encendido");
  }
}
