/*���ư���LED�������°���ʱ����LED���ٴΰ��°���ʱϨ��LED*/

const int LED = 13;
const int BUTTON = 2;
boolean ledState = true;			//��¼LED״̬

void setup()
{
	pinMode(LED, OUTPUT);
	pinMode(BUTTON, INPUT);
}

void loop()
{
	while (digitalRead(BUTTON) == HIGH)
		;								//�ȴ���������
	digitalWrite(LED, ledState);
	ledState = !ledState;
	delay(500);
}