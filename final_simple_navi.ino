
void setup() {
  
  Serial1.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);


  for (int i = 2; i < 10; i++) {
    digitalWrite(i, HIGH);
  }

}

void loop() {


  if (Serial1.available() > 0) {
    char input = Serial1.read();

    if (input == 'f') {
      digitalWrite(2, LOW);
      int pinf[7] = {3, 4, 5, 6, 7, 8, 9};
      for (int i = 0; i < 7; i++) {
        digitalWrite(pinf[i], HIGH);
      }
    }
 
    if (input == 'L') {
      digitalWrite(3, LOW);
      int pinf[7] = {2, 4, 5, 6, 7, 8, 9};
      for (int i = 0; i < 7; i++) {
        digitalWrite(pinf[i], HIGH);
      }
    }
    if (input == 'R') {
      digitalWrite(4, LOW);
      int pinf[7] = {2, 3, 5, 6, 7, 8, 9};
      for (int i = 0; i < 7; i++) {
        digitalWrite(pinf[i], HIGH);
      }
    }
    if (input == 'b') {
      digitalWrite(5, LOW);
      int pinf[7] = {2, 3, 4, 6, 7, 8, 9};
      for (int i = 0; i < 7; i++) {
        digitalWrite(pinf[i], HIGH);
      }
    }
    if (input == 'l') {
      digitalWrite(6, LOW);
      int pinf[7] = {2, 3, 4, 5, 7, 8, 9};
      for (int i =0; i< 7; i++) {
        digitalWrite(pinf[i], HIGH);
      }
    }
    if (input == 'r') {
      digitalWrite(7, LOW);
      int pinf[7] = {2, 3, 4, 5, 6, 8, 9};
      for (int i =0; i< 7; i++) {
        digitalWrite(pinf[i], HIGH);
      }
    }
    if (input == 's') {
      digitalWrite(8, LOW);
      int pinf[7] = {2, 3, 4, 5, 6, 7, 9};
      for (int i =0; i< 7; i++) {
        digitalWrite(pinf[i], HIGH);
      }
    }
    if (input == 'S') {
      digitalWrite(9, LOW);
      int pinf[7] = {2, 3, 4, 5, 6, 7, 8};
      for (int i =0; i< 7; i++) {
        digitalWrite(pinf[i], HIGH);
      }
    }
    delay(1000);
    int allPins[8] = {2, 3, 4, 5, 6, 7, 8, 9};
    for(int i=0; i<8; i++){
    digitalWrite(allPins[i], HIGH);
    }
  }

}
