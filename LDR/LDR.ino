void roboFwd();
void roboLeft();
void roboRight();
void roboStop();

int motorOnepwm = 3;
int motorOneR = 4;
int motorOneL = 5;
int motorTwopwm = 6;
int motorTwoR = 3;
int motorTwoL = 3;

int irOne = 9;
int irTwo = 10;
int irThree = 11;

int S0, S1, S2;


void setup() {

}


void loop() {

int ldr_value = analogRead(A0);
Serial.println(ldr_value);


if (ldr_value > 20) {
                      Serial.println("day");
                      digitalWrite(7,LOW);}

if (ldr_value < 20) {
                      Serial.println("NIGHT");
                      digitalWrite(7,HIGH);}
}
