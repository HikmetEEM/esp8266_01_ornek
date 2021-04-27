#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
bool sanalBtn=0;

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "OOIf08f_mrjdIzj4KQyFw9GTQiCPsRqt";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "HIKMET";
char pass[] = "1999_XqC_2001";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
}
BLYNK_WRITE(V2)
{
  // You'll get uptime value here as result of syncAll()
  Serial.println(param.asInt());
  sanalBtn=param.asInt();
}
void loop() {
  Blynk.run();
  delay (100);

}
