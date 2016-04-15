#include <SoftwareSerial.h>
SoftwareSerial softSerial(10, 11);
String device_A_String = "";
String device_B_String = "";

void setup() {
	// put your setup code here, to run once:
	Serial.begin(9600);
	softSerial.begin(9600);
	softSerial.listen();
}

void loop() {
	// put your main code here, to run repeatedly:
	if (Serial.available()>0)
	{
		if (Serial.peek() != '\n')
		{
			device_B_String += (char)Serial.read();
		}
		else
		{
			Serial.read();
			Serial.print("You said: ");
			Serial.println(device_B_String);
			softSerial.println(device_B_String);
			device_B_String = "";
		}
	}

	if (softSerial.available()>0)
	{
		if (softSerial.peek() != '\n')
		{
			device_A_String += (char)softSerial.read();
		}
		else
		{
			softSerial.read();
			Serial.print("Device A said: ");
			Serial.println(device_A_String);
			device_A_String = "";
		}
	}
}
