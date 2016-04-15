/*slave_sender*/
#include <Wire.h>
void setup()
{
	Wire.begin(1);
	Wire.onRequest(handler);
}

void loop()
{
	delay(100);
}

void handler()
{
	Wire.write("Hello");
}