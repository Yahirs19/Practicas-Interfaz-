/*
  Programa: Desplegando mensaje en OLED Display con Pico W
  Autores:
  - *Yahir Soto*
- *Juan Flores*
- *Rosy Salazar*
- *Eddie Reynoso*
- *Abraham Aganza*

  Fecha: 06/05/2024

  Descripción:
  Programa que manda mensaje desde la Pico W para desplegarlo
  en una OLED Display


*/

#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>
Adafruit_SSD1306 display(128, 64);

void setup() { 
  // Initialize the display
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // Address 0x3C for 128x32
  // Clear the displaya
  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setTextSize(2);
  display.setCursor(0, 0);
  display.println("Hola Mundo desde PICO W");
  display.display();
}

void loop() {
  // Nothing to do here, just display the static text
}
