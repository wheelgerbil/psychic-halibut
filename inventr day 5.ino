int LEDwhite = 8;
int LEDblue = 9;
int LEDyellow = 10;
int LEDgreen = 11;
int LEDred = 12;


int Switch1 = 2;
int Switch2 = 3;
int Switch3 = 4;

void setup() {
  pinMode(LEDwhite, OUTPUT);
  pinMode(LEDblue, OUTPUT);
  pinMode(LEDyellow, OUTPUT);
  pinMode(LEDgreen, OUTPUT);
  pinMode(LEDred, OUTPUT);

  pinMode(Switch1, INPUT);
  pinMode(Switch2, INPUT);
  pinMode(Switch3, INPUT);
}

void loop(){

    if (digitalRead(Switch1) == HIGH //If any switches are on green LED is on, if all switches are off red LED is on.
  || digitalRead(Switch2) ==HIGH 
  || digitalRead(Switch3) == HIGH){
  digitalWrite(LEDgreen, HIGH);
  digitalWrite(LEDred, LOW);

}
else{
  digitalWrite(LEDgreen, LOW);
  digitalWrite(LEDred, HIGH);
}


if (digitalRead(Switch1)==HIGH){
  digitalWrite(LEDwhite, HIGH);
  delay(100);
  digitalWrite(LEDwhite, LOW);
}
else{
  (LEDwhite, LOW);
  }

if (digitalRead(Switch2)==HIGH){
  digitalWrite(LEDblue, HIGH);
  delay(100);
  digitalWrite(LEDblue, LOW);
}
else{(LEDblue, LOW);}

if (digitalRead(Switch3)==HIGH){
  digitalWrite(LEDyellow, HIGH);
  delay(100);
  digitalWrite(LEDyellow, LOW);
}
else{
(LEDyellow, LOW);  
}



}
