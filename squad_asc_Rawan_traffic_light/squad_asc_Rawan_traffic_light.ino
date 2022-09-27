#define red  3
#define yellow  4
#define green 5 
#define button  6
int counter = 0;
void setup()
{
  pinMode(button, INPUT);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}
void loop() {
  if (digitalRead(button) == HIGH)
    counter++;
  if (counter == 1)
  { digitalWrite(green, LOW);
    digitalWrite(red, HIGH);
  }
  else if (counter == 2)
  { digitalWrite(red, LOW);
    digitalWrite(yellow, HIGH);
  }
  else if (counter == 3)
  { digitalWrite(yellow, LOW);
    digitalWrite(green, HIGH);
    counter = 0;
  }
  delay(250);
}
