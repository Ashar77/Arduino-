String value ;
void setup() {

Serial.begin(9600);
pinMode(8,OUTPUT);
}

void loop() {

while (Serial.available()) {

  delay(3);
  char c = Serial.read();
  value += c; 
 }

if (value.length() > 0) {
      Serial.println(value);}

if (value=="on1") {
    digitalWrite(8,HIGH);}

if (value=="off1") {
    digitalWrite(8,LOW);}

value = "";

    
}
