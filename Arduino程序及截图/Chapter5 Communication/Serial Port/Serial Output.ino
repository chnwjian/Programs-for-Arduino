/*ʹ�ô���������ݵ������*/

int counter = 0;

void setup()
{
	Serial.begin(9600);	//���봮�ڼ��������õĲ�����һ��
}

void loop()
{
	counter = counter + 1;
	Serial.print(counter);
	Serial.print(':');
	Serial.println("Hello World!");

	delay(1000);
}