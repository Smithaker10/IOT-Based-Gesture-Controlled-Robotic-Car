#include <WiFi.h>

void setup() {
  Serial.begin(115200);

  delay(2000);  //  for serial to stabilize

  WiFi.mode(WIFI_STA);

  Serial.println("\n\n====================");
  Serial.println("ESP32 MAC ADDRESS:");
  Serial.println("====================");

  Serial.println(WiFi.macAddress());

  Serial.println("====================");
}

void loop() {
}