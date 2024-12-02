#include<DHT.h>
DHT dht(8,DHT22);
float humidity;
float temperature;
void setup() {
  Serial.begin(9600);
  dht.begin();
  

}

void loop() {
  humidity=dht.readHumidity();
  temperature=dht.readTemperature();
  Serial.print("Humidity:");
  Serial.println(humidity);
  Serial.print("Temperature:");
  Serial.println(temperature);
}

