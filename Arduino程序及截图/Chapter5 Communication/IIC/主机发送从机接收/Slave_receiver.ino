/*slave_receiver*/
#include <Wire.h>

void setup()
{
	Wire.begin(4);
	Wire.onReceive(receiveEvent);
	Serial.begin(9600);
}

void loop()
{
	delay(100);
}

void receiveEvent(int howMany)
{
	while (Wire.available()>1)
	{
		char c = Wire.read();
		Serial.print(c);
	}
	int x = Wire.read();
	Serial.println(x);
}
