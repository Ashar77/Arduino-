void roboFwd();
void roboLeft();
void roboRight();
void roboStop();


int motorOneR = 4;
int motorOneL = 5;
int motorOnePWM = 3;
int motorTwoR = 7;
int motorTwoL = 8;
int motorTwoPWM = 6;
int irOne = 9;
int irTwo = 10;
int irThree = 11;
int S0, S1, S2;


void setup() {

pinMode(motorOnePWM,OUTPUT);
pinMode(motorOneR,OUTPUT);
pinMode(motorOneL,OUTPUT);

pinMode(motorTwoL,OUTPUT);
pinMode(motorTwoR,OUTPUT);
pinMode(motorTwoPWM,OUTPUT);

pinMode(irOne,INPUT);
pinMode(irTwo,INPUT);
pinMode(irThree,INPUT);

Serial.begin(9600);

}

void loop() {


S0 = digitalRead(irOne);
S1 = digitalRead(irTwo);
S2 = digitalRead(irThree);

Serial.print("Sensor1: "); Serial.println(S0);
Serial.print("Sensor2: "); Serial.println(S1);
Serial.print("Sensor3: "); Serial.println(S2);

if (S0 == LOW && S1 == HIGH && S2 == LOW) {
  // FORWARD
  }


else if (S0 == HIGH && S1 == LOW && S2 == LOW) {
  // RIGHT
  }


else if (S0 == LOW && S1 == LOW && S2 == HIGH) {
  // LEFT
  }






}
