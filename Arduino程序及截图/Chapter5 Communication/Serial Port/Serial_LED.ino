/*通过串口监视器发送“H”，LED亮，发送“L”，LED灭*/

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
			digitalWrite(LED, HIGH);	//输入H，LED亮
			Serial.println("The light has been turned on!");
		}
		else if (ch == 'L')
		{
			digitalWrite(LED, LOW);		//输入L，LED灭
			Serial.println("The light has been turned off!");
		}
		else
		{
			Serial.println("Please enter the correct instruction!!!");
		}
	}
}