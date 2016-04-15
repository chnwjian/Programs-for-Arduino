/*����˫ɫ�����ܣ�5mm��3mm������*/

const int redPin = 11;
const int greenPin = 10;
int val;

void setup()
{
	pinMode(redPin, OUTPUT);
	pinMode(greenPin, OUTPUT);
}

void loop()
{
	for (val = 0; val <= 255; val++)
	{
		analogWrite(redPin, val);
		analogWrite(greenPin, 255-val);
		delay(10);
	}
	
	for (; val >= 0; val--)
	{
		analogWrite(redPin, val);
		analogWrite(greenPin, 255 - val);
		delay(10);
	}
	
}