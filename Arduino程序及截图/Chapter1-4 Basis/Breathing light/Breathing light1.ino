/*���ư���LED��ʹ���Ϊ�����ƣ�LED���𽻻����䣬���ƺ���һ�㣩*/

const int LED = 13;

void setup()
{
	//˼����Ϊʲô�˴�û����������ģʽ��
}

void loop()
{
	for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5)
	{
		analogWrite(LED, fadeValue);
		delay(30);
	}

	for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5)
	{
		analogWrite(LED, fadeValue);
		delay(30);
	}
}