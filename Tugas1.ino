int red = 2;
int yellow = 3;
int green = 4;
char lampu;

void setup()
{
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  while (Serial.available())
  {
    lampu = Serial.read();
    if (lampu == 'a')
      ledRed:
    	{
          digitalWrite(red, HIGH);
          delay(500);
          digitalWrite(red, LOW);
          delay(500);
          digitalWrite(yellow, LOW);
          digitalWrite(green, LOW);
          Serial.println("LED merah nyala");
          loop();
          goto ledRed;
        }
      else if (lampu =='b')    	
      ledYellow:
    	{
          digitalWrite(yellow, HIGH);
          delay(500);
          digitalWrite(yellow, LOW);
          delay(500);
          Serial.println("LED kuning nyala");
          delay(500) ;
          loop();
          goto ledYellow;
        }
      else if (lampu =='c')    	
      ledGreen:
    	{
          digitalWrite(green, HIGH);
          delay(500);
          digitalWrite(green, LOW);
          delay(500);
          Serial.println("LED hijau nyala");
          delay(500) ;
          loop();
          goto ledGreen;
        }			
  }
}