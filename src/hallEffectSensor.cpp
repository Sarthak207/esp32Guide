/*
1) The ESP32 features a built-in hall effect sensor which is located (behind that metal cap)
2) A hall effect sensor can detect variations in the magnetic field in its surroundings. The 
greater the magnetic field, the greater the output voltage.
3) 
*/

int val = 0; 
void setup() { 
    Serial.begin(9600); 
} 
// put your main code here, to run repeatedly 
void loop() { 
// read hall effect sensor value 
    val = hallRead(); 
// print the results to the serial monitor 
    Serial.println(val); 
}