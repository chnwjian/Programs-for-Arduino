/*ʹ�ô��ڶ�ȡ����,�����ɽ����������*/

char ch;

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	if (Serial.available() > 0)
	{
		ch = Serial.read();
		Serial.print(ch);
	}
}
