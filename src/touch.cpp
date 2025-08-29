/*
** Touch Sensor
1) capacitive touch GPIOs
*/

void setup(){
    Serial.begin(115200);
}

void loop(){
    Serial.println(touchRead(4))
}

// it gives analog output, so write programs according to suitable thresholds

