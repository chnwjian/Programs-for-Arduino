/*���������ַ���*/

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	String instring = "";
	while (Serial.available() > 0)
	{
		instring += (char)Serial.read();
		//�ʵ���ʱ��ȷ������д�뻺����
		delay(10);
	}
	if(instring!="")
	{
		Serial.print("The string is ");
		Serial.println(instring);
	}
}