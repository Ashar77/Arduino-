void setup() {
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  Serial.println("LED1 is ON!,2 and 3 are off");
  delay(1000);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
  Serial.println("LED2 is ON!,1 and 3 are off");
  delay(1000);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  Serial.println("LED3 is ON!,1 and 2 are off ");
  delay(1000);
    
}
