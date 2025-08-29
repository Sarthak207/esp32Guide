const int button= 4;
const int led= 16;

int state=0;

void setup(){
    Serial.begin(115200);
    pinMode(button, INPUT);
    pinMode(led, OUTPUT);
}

void loop(){
    state= digitalRead(button);
    if(state==HIGH){
        digitalWrite(led,HIGH);
    }else{
        digitalWrite(led,LOW);
    }
}

