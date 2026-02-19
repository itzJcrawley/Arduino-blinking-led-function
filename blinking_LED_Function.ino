int blue_LED = 9;

void blinking();

void setup() {
  pinMode(blue_LED, OUTPUT);
}


void loop() {

  blinking(blue_LED);

}

int blinking(int a)
{

  digitalWrite(a, LOW);

  for (int i = 0; i < 10; i++)
  {

    digitalWrite(a,HIGH);
    delay(180);
    digitalWrite(a,LOW);
    delay(180);

  }
  
}