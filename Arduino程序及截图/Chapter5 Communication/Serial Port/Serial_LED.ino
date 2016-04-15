/*ͨ�����ڼ��������͡�H����LED�������͡�L����LED��*/

#define LED 13

char ch;

void setup()
{
	Serial.begin(9600);
	pinMode(LED, OUTPUT);
}

void loop()
{
	if (Serial.available() > 0)
	{
		ch = Serial.read();
		if(ch=='H')
		{
			digitalWrite(LED, HIGH);	//����H��LED��
			Serial.println("The light has been turned on!");
		}
		else if (ch == 'L')
		{
			digitalWrite(LED, LOW);		//����L��LED��
			Serial.println("The light has been turned off!");
		}
		else
		{
			Serial.println("Please enter the correct instruction!!!");
		}
	}
}