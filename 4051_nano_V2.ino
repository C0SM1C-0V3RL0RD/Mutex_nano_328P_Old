/* CD4051 MUTEX */

#define A 2
#define B 3
#define C 5

#define buzz 4

void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);

  pinMode(buzz, OUTPUT);

  digitalWrite(buzz, 1);
  delay(250);
  digitalWrite(buzz, 0);
  
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < 8; i++) {  
    kapiSec(i);
    delay(1000);
  }
}


void kapiSec(int kapi) {
  digitalWrite(A, bitRead(kapi, 0)); 
  digitalWrite(B, bitRead(kapi, 1)); 
  digitalWrite(C, bitRead(kapi, 2)); 
}
