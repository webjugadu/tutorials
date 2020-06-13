#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "RbnHxePdc2xZYfaqWtLpBv308xvKN1fq";

char ssid[] = "Realme 1";
char pass[] = "12345678";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
