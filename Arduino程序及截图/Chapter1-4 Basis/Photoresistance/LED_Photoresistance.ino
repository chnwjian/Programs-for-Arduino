/*ʹ�ù���������ư���LED����*/

const int LED = 13;
int fadeValue;
int lightValue;		//ģ�����Ŷ�ȡ��������ֵ

void setup()
{
	
}

void loop()
{
	lightValue = analogRead(A0)/5;
	analogWrite(LED, lightValue);	
	//������analogWrite��pin��value���У�value��ȡֵΪ0~255
	delay(500);
}