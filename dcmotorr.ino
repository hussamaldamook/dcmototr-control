void setup(){
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);

}
void loop(){
  // rotating to right
  digitalWrite(1,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  delay (1000);
  //rotating to left
 digitalWrite(2,HIGH);
  digitalWrite(1,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW); 
delay(1000);
}
