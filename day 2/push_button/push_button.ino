void setup() {

pinMode(2,INPUT);
Serial.begin(9600);
pinMode(4,OUTPUT);
}

void loop() {

int buttonState = digitalRead(2);
if (buttonState == 1) {
  Serial.println("button is pressed");
  digitalWrite(4,HIGH);
  }

else {
      Serial.println("button is not pressed");}      
      digitalWrite(4,LOW);

}
