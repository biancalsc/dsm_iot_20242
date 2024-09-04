const int recebeValor = A0;
const int converteAnaDig = 6;

int valorSensor = 0;
int valorConvertido = 0;

void setup (){
	Serial.begin(9600);
}

void loop (){
	valorSensor = analogRead(recebeValor);
  valorConvertido = map(valorSensor, 0, 1023, 0, 255);
  analogWrite(converteAnaDig, valorConvertido);
  
  Serial.print("Sensor= ");
  Serial.print(valorSensor);
  Serial.print("t\ output= ");
  Serial.println(valorConvertido);
  
  delay(2);
}