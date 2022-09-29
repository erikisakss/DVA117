#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;

void setup() {
  // put your setup code here, to run once:

  lcd.begin(16, 2);
  pinMode(switchPin, INPUT);
  lcd.print("Ask the");
  lcd.setCursor(0, 1);
  lcd.print("Crystal Ball!");
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  switchState = digitalRead(switchPin);

  if(switchState != prevSwitchState){
    if(switchState == LOW){
      reply = random(8);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("The ball says: ");
      lcd.setCursor(0, 1);

      switch(reply){
        case 0:
        lcd.print("Yes");
        digitalWrite(9, HIGH);
        delay(2000);
        digitalWrite(9, LOW);
        break;
        case 1:
        lcd.print("Most Likely");
        digitalWrite(9, HIGH);
        delay(2000);
        digitalWrite(9, LOW);
        break;
        case 2:
        lcd.print("Certainly");
        digitalWrite(9, HIGH);
        delay(2000);
        digitalWrite(9, LOW);
        break;
        case 3:
        lcd.print("Outlook good");

       digitalWrite(9, HIGH);
        delay(2000);
        digitalWrite(9, LOW);
        break;
        case 4:
        lcd.print("Unsure");
        digitalWrite(8, HIGH);
        delay(2000);
        digitalWrite(8, LOW);
        break;
        case 5:
        lcd.print("Ask again");
          digitalWrite(8, HIGH);
        delay(2000);
        digitalWrite(8, LOW);
        break;
        case 6:
        lcd.print("Doubtful"); 
        digitalWrite(8, HIGH);
        delay(2000);
        digitalWrite(8, LOW);
        break;
        lcd.print("No");
         digitalWrite(8, HIGH);
        delay(2000);
        digitalWrite(8, LOW);
        break;
      }

    }

  }
  prevSwitchState = switchState;
}
