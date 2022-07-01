 int tilt = 2;  
int reading;     
int GreenLed = 13;  
int RedLed = 12;     
int buzzer = 10; 

void setup()
{
  pinMode (tilt, INPUT);
  pinMode (GreenLed, OUTPUT);
  pinMode (RedLed, OUTPUT);
  Serial.begin(9600);
}

void loop ()
{
  reading = digitalRead(tilt);
  if (reading == 1) 
  {
    digitalWrite(RedLed, HIGH);  
    digitalWrite(GreenLed, LOW);
    tone(buzzer, 494, 500); 
    delay(500);     
  } 
  else
  {
    digitalWrite(RedLed, LOW);
    digitalWrite(GreenLed, HIGH);  
    delay(100);  
  }
  Serial.println(reading);
  }
