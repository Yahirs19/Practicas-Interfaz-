/*
  Programa: Control de Raspberry Pi Pico W
  Autor: 
- *Yahir Soto*
- *Juan Flores*
- *Rosy Salazar*
- *Eddie Reynoso*
- *Abraham Aganza*

  Fecha: 30/04/2024

  Descripción:
  Este programa inicializa la comunicación serial en una Raspberry Pi Pico W y envía un mensaje de bienvenida.
  Posteriormente, entra en un bucle infinito donde puede agregar más funcionalidades.

*/

#include <Arduino.h>

void setup() {
  // Inicializa la comunicación serial a 115200 baudios.
  Serial.begin(9600);
  
  // Envía un mensaje de bienvenida.

  // Configuraciones adicionales aquí.
}

void loop() {
  // Código principal que se ejecuta repetidamente.

  // Por ejemplo, podrías agregar lógica para leer sensores, controlar actuadores, etc.
    Serial.println("Hello World");


  // Retraso mínimo para evitar saturar el bucle.
  delay(1);
}
