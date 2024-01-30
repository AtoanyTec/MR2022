//////////////////////////////////Pines//////////////////////////////////
// Define el número de pines para cada variable

//Escribe aquí tu código



//////////////////////////////////Variables//////////////////////////////////
//Define tus variables

//Escribe aquí tu código



//////////////////////////////////void Setup//////////////////////////////////
void setup() {
  //Establece la velocidad de conexión con el monitor serie
  Serial.begin(_______);

  //Establece el pin del sensor como entrada
  pinMode(_______);

  //Establece la interrupción para el sensor con la siguiente sintaxis:
  //attachInterrupt(digitalPinToInterrupt(pin_del_sensor), función_que_debe_hacer, RISING);
  attachInterrupt(digitalPinToInterrupt(__________), ___________, RISING);

  //Establece los pines del motor como salida
  pinMode(________, _______);
  pinMode(________, _______); 
}



///////////////////////////////////función que realiza la acción de la interrupción//////////////////////////////////
void nombre_funcion()
{
  //Inserta tu código aqui de lo que quieres que se realice cuando se detecte un obstaculo
}



//////////////////////////////////leer tipo de usuario//////////////////////////////////
int nombre_funcion()
{
  //lee el pin de operador y de supervisor
  _________ = digitalRead(_________);
  _________ = digitalRead(________);

  //Implementa un condicional para leer el tipo de usuario
  if(__________ == 1 && __________ == 0)
  {
    Serial.println("Modo Operador");
    return 0;
  }
  else if(__________ == 0 && __________ == 1)
  {
    Serial.println("Modo Supervisor");
    return 1;
  }
  else
  {
    Serial.println(" ");
    return 2;
  }
}



//////////////////////////////////Modo Manual//////////////////////////////////
void nombre_funcion()
{
  Serial.println("Modo Manual");

  //lee los pines para subir y bajar la cortina
  __________ = digitalRead(__________);
  __________ = digitalRead(__________);

  //Comenzamos con los motores apagados
  digitalWrite(__________, LOW);
  digitalWrite(__________, LOW);

  //Creamos un condicional para detectar el boton de subir y el boton de bajar
  if(__________ == 1 && __________ == 0)
  {
    digitalWrite(__________, HIGH);
    digitalWrite(__________, LOW);
    //delay(2000);
  }
  else if(__________ == 0 && __________ == 1)
  {
    digitalWrite(__________, LOW);
    digitalWrite(__________, HIGH);
    //delay(2000); 
  }
}


//////////////////////////////////Modo automático//////////////////////////////////
void nombre_función()
{
  Serial.println("Modo Automatico");

  //Motor apagado
  digitalWrite(__________, LOW);
  digitalWrite(__________, LOW);

  //Subiendo
  digitalWrite(__________, HIGH);
  digitalWrite(__________, LOW);
  delay(1000);
  
  //Pausa
  digitalWrite(__________, LOW);
  digitalWrite(__________, LOW);
  //La variable retardo se puede modificar
  delay(__________);

  //Bajando
  digitalWrite(__________, LOW);
  digitalWrite(__________, HIGH);
  delay(1000);
}

//////////////////////////////////Modo operador//////////////////////////////////
void modo_operador()
{
  Serial.println("Modo Operador");

  //Leer los botones de manual y automático
  __________ = digitalRead(__________);
  __________ = digitalRead(__________);

  //Crear un condicional para realizar el modo manual o el modo automático
  if(__________ == 1 && __________ == 0)
  {
    nombre_función_manual(); 
  }
  else if(__________ == 0 && __________ == 1)
  {
    nombre_función_automatica();
  }
}


//////////////////////////////////Modo supervisor//////////////////////////////////
void nombre_función()
{
  Serial.print("Numero de alarmas: ");
  Serial.println(__________);
  nombre_funcion_operador();
}

//////////////////////////////////void loop//////////////////////////////////
void loop() {
  //declarar una variable tipo entero que lea el tipo de usuario
  int variable_tipo_usuario;
  
  variable_tipo_usuario = funcion_que_lee_tipo_usuario();
  Serial.print("Tipo de usuario: ");
  Serial.println(variable_tipo_usuario);

  //Crear un condicional para seleccionar operador o supervisor
  if(__________ == 0)
  {
    funcion_modo_operador();
  }
  else if(__________ == 1)
  {
    funcion_modo_supervisor();
  }

}
