void setup() {
  pinMode(9,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(A0);
  analogWrite(9,potValue/4); 

}
