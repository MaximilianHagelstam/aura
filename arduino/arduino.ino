#include "DHT.h"

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);  
  dht.begin();
}

void loop() {
  int temperature = dht.readTemperature();
  Serial.println(temperature);
  delay(1000);
}
