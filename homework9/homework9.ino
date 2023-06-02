#include <Adafruit_CircuitPlayground.h>

float value;
int colour;
void setup() 
{
Serial.begin(9600);
CircuitPlayground.begin();
}

void loop() 
{
  value = CircuitPlayground.mic.soundPressureLevel(10);
  colour= map(value, 50, 100, 0, 255);
  Serial.print("Sound Sensor: ");
  Serial.println(value);
  Serial.println(colour);
  for(int i =0;i<10;i++)
    {
      CircuitPlayground.setPixelColor(i,colour,(colour+40)%255 ,(colour+70)%255);
      delay(100);
    }
}