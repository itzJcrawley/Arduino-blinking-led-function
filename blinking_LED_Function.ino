int blue_LED = 9; // Setting the pin number on the arduino for the led output.

void blinking(); // Declaring the function.

void setup() {
  pinMode(blue_LED, OUTPUT); // Setting the varible of the blue_LED which is pin 9 to an output.
}


void loop() {

  blinking(blue_LED); // Calling the function and passing in blue_LED into the function.

}

int blinking(int a) // Defining the function with int a to be a place holder for the blue_LED varible.
{

  digitalWrite(a, LOW); // Starting the output on pin 9 to be low.

  for (int i = 0; i < 10; i++) // The actual loop that changes the output of pin 9 from high to low 10 times.
  {

    digitalWrite(a,HIGH);
    delay(180);
    digitalWrite(a,LOW);
    delay(180);

  }
  
}
