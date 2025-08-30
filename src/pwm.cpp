/*
** ESP32 PWM
1)The ESP32 LED PWM controller has 16 independent channels that can be configured to 
generate PWM signals with different properties.
2) Here’s the steps you’ll have to follow to dim an LED with PWM using the Arduino IDE:
3) First, you need to choose a PWM channel. There are 16 channels from 0 to 15.
4) Then, you need to set the PWM signal frequency.
5) You also need to set the signal’s duty cycle resolution: you have resolutions from 
1 to 16 bits.  We’ll use 8-bit resolution, which means you can control the LED 
brightness using a value from 0 to 255. 
6) Next, you need to specify to which GPIO or GPIOs the signal will appear upon. For 
that you’ll use the following function: 
ledcAttachPin(GPIO, channel)
7)Finally, to control the LED brightness using PWM, you use the following function: 
ledcWrite(channel, dutycycle)
*/


const int ledPin= 16;

const int freq= 5000;
const int channel= 0;
const int res= 8;

void setup(){
    ledcSetup(channel,freq,res);
    ledcAttachPin(ledPin,channel);
}

void loop(){
    for(int duty=0; duty<=255; duty++){
        ledcWrite(channel,duty);
        delay(15);
    }
}
