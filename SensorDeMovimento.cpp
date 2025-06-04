int pinSensorPIR = 9;
int pinLed = 8;
int valorSensorPIR= 0;

void setup(){
  
  Serial.begin(9600);
  pinMode(pinSensorPIR, INPUT);
  pinMode(pinLed, OUTPUT);
}

void loop(){
  valorSensorPIR = digitalRead(pinSensorPIR);
  
  Serial.print("Valor do Sensor PIR: ");
  Serial.println(valorSensorPIR);
  
  if (valorSensorPIR ==1) {
    ligarLED();
  } else{
    desligarLED();
  }
}

void ligarLED() {
  digitalWrite(pinLed, HIGH);
}

void desligarLED() {
  digitalWrite(pinLed, LOW);
}
