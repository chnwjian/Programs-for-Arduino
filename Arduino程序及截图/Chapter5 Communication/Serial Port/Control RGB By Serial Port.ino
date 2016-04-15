/*ͨ�����ڿ���RGB LED����*/
#define RED 9
#define GREEN 10
#define BLUE 11

int i;
String inputString = "";
char LED = ' ';
boolean stringComplete = false;

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	if(stringComplete)
	{
		Serial.print(LED);
		if (LED == 'R')
			analogWrite(RED, i);
		else if (LED == 'G')
			analogWrite(GREEN, i);
		else if (LED == 'B')
			analogWrite(BLUE, i);
		//������ݣ�Ϊ��һ�ζ�ȡ��׼��
		stringComplete = false;
		inputString = "";
		LED = ' ';
	}
}

void serialEvent()
{
	while (Serial.available())
	{
		char inChar = Serial.read();
		if (isDigit(inChar))
			inputString += inChar;
		else if (inChar == '\n')
		{
			stringComplete = true;
			i = inputString.toInt();
		}
		else
			LED = inChar;		
	}
}	