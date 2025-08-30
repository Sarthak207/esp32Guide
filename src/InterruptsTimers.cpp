/*
** Interrupts **
1) With interrupts you don’t need to constantly check the current value of a pin. With 
interrupts, when a change is detected, an event is triggered (a function is called). 
2) attachInterrupt(digitalPinToInterrupt(GPIO), funcion, mode); 
3) Mode 
The third argument is the mode. There are 5 different modes: 
 LOW: to trigger the interrupt whenever the pin is LOW; 
 HIGH: to trigger the interrupt whenever the pin is HIGH; 
 CHANGE: to trigger the interrupt whenever the pin changes value - for example 
from HIGH to LOW or LOW to HIGH; 
 FALLING: for when the pin goes from HIGH to LOW. 
 RISING: to trigger when the pin goes from LOW to HIGH; 

** Timers **
1) delay() function
2) millis():- you can return the number of milliseconds that have 
passed since the program first started. 
*/

const int ledPin = 26;
int state = LOW;

unsigned long previousMillis = 0;
const long interval = 1000;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    // Toggle LED state
    state = (state == LOW) ? HIGH : LOW;
  }
  digitalWrite(ledPin, state);
}
