int count = 0;
void setup() 
{
  pinMode(5,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop() 
{
  if(digitalRead(5) == HIGH)
  {
    count++;
  }
  if(count == 1)
  {
    digitalWrite(2,HIGH);
    delay(500);
  }
  else if (count == 2)
  {
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    delay(500);
  }
  else if (count == 3)
  {
    digitalWrite(2,LOW);
    digitalWrite(4,HIGH);
    count = 0;
    delay(500);
    digitalWrite(4,LOW);
  }

}
