#include "pitches.h"
int buttons[6];
int melody[] = {NOTE_C5, NOTE_E5, NOTE_A5, NOTE_B4, NOTE_G5};
int noteDurations[] = {8,8,8};
int i;
void setup() {
  buttons[0] = 2;
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
int keyVal = analogRead(A0);
Serial.println(keyVal);
if(keyVal == 1023){
tone(8, melody[0]);
delay(60);
tone(8, melody[1]);
delay(60);
tone(8, melody[2]);
delay(60);
noTone(8);
delay(150);
}

else if(keyVal >= 990 && keyVal <= 1010){
  tone(8, melody[3]);
  delay(60);
  tone(8, melody[1]);
  delay(60);
  tone(8, melody[2]);
  delay(60);
  noTone(8);
  delay(150);
   
}
else if(keyVal >= 505 && keyVal <= 515){
   tone(8, melody[3]);
  delay(60);
  tone(8, melody[1]);
  delay(60);
  tone(8, melody[4]);
  delay(60);
  noTone(8);
  delay(150);
 
}
else if(keyVal >= 5 && keyVal <= 10)
{
  for(i = 0; i < 8; i++){
  tone(8, melody[0]);
delay(60);
tone(8, melody[1]);
delay(60);
tone(8, melody[2]);
delay(60);
noTone(8);
delay(150);
  }
  for(i = 0; i <3; i++)
  {
     tone(8, melody[3]);
  delay(60);
  tone(8, melody[1]);
  delay(60);
  tone(8, melody[2]);
  delay(60);
  noTone(8);
  delay(150);

  }
  for(i = 0; i < 5; i++)
  {
       tone(8, melody[3]);
  delay(60);
  tone(8, melody[1]);
  delay(60);
  tone(8, melody[4]);
  delay(60);
  noTone(8);
  delay(150);



  }

}


else{
  noTone(8);
}

}
