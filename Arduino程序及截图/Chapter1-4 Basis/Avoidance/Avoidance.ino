/*****
���ǰ���Ƿ������壬���û�м�⵽���壬��������������
���ϰ���ʱ��ģ������͵�ƽ�����ϰ���ģ������ߵ�ƽ
����ģ��Ϊopenjumper����ģ��
*****/

const int BUZZER = 12;
boolean state=false;

void setup()
{
	Serial.begin(9600);
	pinMode(2, INPUT);
	attachInterrupt(0, Warning, CHANGE);
}

void loop()
{
	//Serial.println(digitalRead(2));
	if (state)
	{
		tone(BUZZER, 1000);
	}
	else
		noTone(BUZZER);
	
}

void Warning()
{
	state =! state;
}