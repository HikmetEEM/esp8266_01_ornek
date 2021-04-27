#define btn 0
#define led 2


void setup() {
  pinMode(btn, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(led,digitalRead(btn));
  Serial.println(digitalRead(btn));
  delay(100);
}
