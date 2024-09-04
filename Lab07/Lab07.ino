int led = 7;


void setup(){
  
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  int sensor = analogRead(A0);
  Serial.println(sensor);
  
  if (sensor < 500){
    digitalWrite(led, HIGH);
  }
  
  else{
    digitalWrite(led, LOW);  
  }
  
  delay(500);	
}