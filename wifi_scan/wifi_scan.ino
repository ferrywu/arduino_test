#include "WiFi.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  Serial.println("");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Scanning......");
  int num = WiFi.scanNetworks();
  for (int i = 0; i < num; i++) {
    Serial.println(WiFi.SSID(i));
  }
  Serial.println("");
  delay(5000);
}
