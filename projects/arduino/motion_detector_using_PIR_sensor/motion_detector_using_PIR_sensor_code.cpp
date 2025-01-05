int ir;
void setup()
{
  pinMode(9, INPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  ir=digitalRead(9);
  if(ir==HIGH){
    digitalWrite(12,HIGH);}
  else{
    digitalWrite(12,LOW);}
}
