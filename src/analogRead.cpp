/* 
1) can measure voltage lvls from 0 to 3.3V.
2) voltage measured is then assigned to vals 0 to 4095.
*/

const int pot= 34;
int val=0;

void setup(){
  Serial.begin(115200);
  delay(15);
}

void loop(){
  val= analogRead(pot);
  Serial.println(val);
  delay(500);
}