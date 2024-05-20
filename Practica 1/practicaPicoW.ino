/*
  Programa: Imprimir mensajes mediante el uso de Winforms C# y Pico W
  Autor: Reynoso Rosales Eduardo Guadalupe
  Fecha: 11/05/2024

  Descripción:
  Este programa corre de forma indeterminada, y cuando llega a recibir un mensaje 
  que es enviado desde el programa hecho en C#, lo lee desde el Serial, y lo imprime

*/

int count = 0;
unsigned long previousMillis = 0;
const long interval = 1000;

void setup() {
  Serial.begin(115200);

}

void loop() {
  unsigned long currentMillis = millis();

  if(Serial.available()>0){
    Serial.println("Mensaje: " + Serial.readString());
  }

}
