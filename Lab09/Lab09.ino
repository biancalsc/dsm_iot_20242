const int sensorPin = 7;
const int ledPin = 3;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  
  digitalWrite(ledPin, LOW);
}

void loop() {
  int sensorValue = digitalRead(sensorPin);
  
  if (sensorValue == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Movimento detectado!");
  } else {
    digitalWrite(ledPin, LOW);
  }
  
  delay(100);
}