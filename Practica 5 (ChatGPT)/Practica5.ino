/*
  Programa: Control de Raspberry Pi Pico W
  Autor: Reynoso Rosales Eduardo Guadalupe 21212036
  Fecha: 17/05/2024

  Descripción:
  Programa que hace una petición a la API de Chat GPT, donde manda un mensaje
  y recibe una respuesta.


*/

#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <ArduinoJson.h>

// Replace with your network credentials
const char* ssid = "INGRESAR NOMBRE DE INTERNET";
const char* password = "INGRESAR CODIGO DE INTERNET";
// Replace with your API Key and Model ID
const char* api_key = "AQUI SE PONE LA API KEY";
const char* model_id = "gpt-3.5-turbo-0125";
// Set the hostname and URL for the API
const char* host = "api.openai.com";
const char* url = "/v1/chat/completions";
void setup() {
Serial.begin(115200);
delay(10);
// Connect to Wi-Fi
Serial.println();
Serial.print("Connecting to ");
Serial.println(ssid);
WiFi.begin(ssid, password);
while (WiFi.status() != WL_CONNECTED) {
delay(500);
Serial.print(".");
}
Serial.println("");
Serial.println("WiFi connected");
// Set up secure client
WiFiClientSecure client;
client.setInsecure();
client.setTimeout(10000);
// Connect to ChatGPT API
Serial.print("Connecting to API...");
if (!client.connect(host, 443)) {
Serial.println("failed");
return;
}
Serial.println("connected");
// Build request payload
String payload = "{";
payload += "\"model\": \"gpt-3.5-turbo-0125\",";
payload += "\"messages\": [";
payload += "{\"role\": \"user\",";
payload += "\"content\": \"Cuentame un chiste\"}";
payload += "],";
payload += "\"temperature\": 0.7,";
payload += "\"max_tokens\": 50,";
payload += "\"n\": 1,";
payload += "\"stop\": \"\\n\"}";
// Build HTTP request
String request = "POST ";
request += url;
request += " HTTP/1.1\r\n";
request += "Host: ";
request += host;
request += "\r\n";
request += "Authorization: Bearer ";
request += api_key;
request += "\r\n";
request += "Content-Type: application/json\r\n";
request += "Content-Length: ";
request += payload.length();
request += "\r\n\r\n";
request += payload;
// Send HTTP request
Serial.println("Sending request...");
client.print(request);
// Wait for response from OpenAI API
Serial.println("Waiting for response...");
while (client.connected()) {
if (client.available()) {
String response = client.readString();

const char* r = response.c_str();

JsonDocument respuesta;
deserializeJson(respuesta, response);

const char* content = respuesta["choices"][0];

Serial.print(content);
Serial.print(response);
}
}
}
void loop() {
// Nothing to do here
}