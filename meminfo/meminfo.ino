#include "ESP.h"
extern "C" {
#include <esp_spiram.h>
#include <esp_himem.h>
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  Serial.println("");
  Serial.print("flash size:");
  Serial.println(spi_flash_get_chip_size());

  Serial.println("");
  Serial.print("total heap:");
  Serial.println(ESP.getHeapSize());
  Serial.print("free heap: ");
  Serial.println(ESP.getFreeHeap());

  if(psramFound()){
    Serial.println("");
    Serial.print("spiram size:");
    Serial.println(esp_spiram_get_size());

    Serial.println("");
    Serial.print("total spram:");
    Serial.println(ESP.getPsramSize());
    Serial.print("free psram: ");
    Serial.println(ESP.getFreePsram());

    Serial.println("");
    Serial.print("total himem:");
    Serial.println(esp_himem_get_phys_size());
    Serial.print("free himem: ");
    Serial.println(esp_himem_get_free_size());
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
