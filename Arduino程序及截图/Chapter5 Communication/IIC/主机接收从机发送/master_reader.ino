/*master_reader*/

#include <Wire.h>

void setup()
{
	Wire.begin();
	Serial.begin(9600);
}

void loop()
{
	Wire.requestFrom(1, 5);
	while (Wire.available() > 1)
	{
		char c = Wire.read();
		Serial.print(c);
	}
	Serial.println((char)Wire.read());
	delay(500);
}
