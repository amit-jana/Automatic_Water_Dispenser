int solenoid = 6;
int ir_receiver = 4;

const long interval = 1000;
 
void setup() {
  
pinMode(ir_receiver, INPUT);
pinMode(solenoid, OUTPUT);
}

void loop() {

int value = digitalRead(ir_receiver);

unsigned long currentMillis = millis();

if(value == HIGH) {
Serial.println("Value is high");
digitalWrite(solenoid, HIGH);
}

else {
Serial.println("Value is low");
digitalWrite(solenoid, LOW);
}

Serial.println(value);
}
