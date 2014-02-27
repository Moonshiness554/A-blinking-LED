A-blinking-LED
==============

/*
  Turns on an LED on for one second, then off for one second, continuously. 
 */
 
// putting LED into pin 13
int led = 13;

// the setup routine runs once when you press reset:

void setup() {   
             
// initializing the digital pin as an output.

  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:

void loop() {
  digitalWrite(led, HIGH);   // turn the LED on 
  delay(1000);               // wait for one second
  digitalWrite(led, LOW);    // turn the LED off 
  delay(1000);               // wait for one second
}
