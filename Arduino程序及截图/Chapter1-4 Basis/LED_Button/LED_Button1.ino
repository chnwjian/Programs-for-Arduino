
/*���ư���LED������ס����ʱ����LED�����ſ�������Ϩ��LED*/	

const int LED = 13;
const int BUTTON = 2;
int buttonState;

void setup()
{
	pinMode(LED, OUTPUT);
	pinMode(BUTTON, INPUT);
}

void loop()
{
	buttonState = digitalRead(BUTTON);
	if (buttonState == 1)
	{
		digitalWrite(LED, LOW);
	}
	else
		digitalWrite(LED, HIGH);
}