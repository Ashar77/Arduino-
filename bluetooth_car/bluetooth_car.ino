String value;
void setup() {

Serial.begin(9600);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
Serial.begin(9600);


 
}

void loop() {

while (Serial.available()) {

  delay(3);
  char c = Serial.read();
  value += c;
    }

if (value.length()>0) {
  
  Serial.println(value);}

if (value=="FF"){
 digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  analogWrite(9,30);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  analogWrite(11,30);
  }


if (value=="BB"){
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  analogWrite(9,30);
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
  analogWrite(11,30);
  }

  
if (value=="LL"){
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  analogWrite(9,30);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  analogWrite(11,30);
 }

if (value=="RR"){
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  analogWrite(9,30);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  analogWrite(11,30);
  }

if (value=="1"){
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  analogWrite(9,30);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  analogWrite(11,30);
 }

   value = "";

}
