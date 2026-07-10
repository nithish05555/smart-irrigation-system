/*
  Smart Irrigation System
  Automated soil-moisture-based irrigation using Arduino,
  a soil moisture sensor, and a DHT temperature/humidity sensor.
  Author: Nithish K
*/

#include <DHT.h>

#define SOIL_PIN A0
#define RELAY_PIN 7
#define DHT_PIN 2
#define DHT_TYPE DHT11

DHT dht(DHT_PIN, DHT_TYPE);

int moistureThreshold = 500; // adjust based on calibration

void setup() {
  Serial.begin(9600);
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW);
  dht.begin();
}

void loop() {
  int soilValue = analogRead(SOIL_PIN);
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  Serial.print("Soil Moisture: ");
  Serial.print(soilValue);
  Serial.print(" | Temp: ");
  Serial.print(temperature);
  Serial.print(" C | Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  if (soilValue > moistureThreshold) {
    digitalWrite(RELAY_PIN, HIGH); // turn pump ON
    Serial.println("Soil dry -> Pump ON");
  } else {
    digitalWrite(RELAY_PIN, LOW); // turn pump OFF
    Serial.println("Soil moist -> Pump OFF");
  }

  delay(2000);
}
