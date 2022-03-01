int ledPin[] = {9,10,11,12};
int Count = 4,val=0,once=0,Pin;
const int SW=8;
int j;
void setup() 
{
  for (Pin = 0; Pin < Count; Pin++)
  {
    pinMode(ledPin[Pin], OUTPUT);  
    pinMode(SW,INPUT);    
  }
}

void loop() 
{
  val=digitalRead(SW);
  delay(120);
  if(val==LOW)
  {
    if(once==0)
    {
      digitalWrite(ledPin[Pin], HIGH);
      delay(200);                  
      digitalWrite(ledPin[Pin], LOW);
      Pin=(Pin+1)%4;
      once=1;
    }
  }
  else 
  once=0;
}
