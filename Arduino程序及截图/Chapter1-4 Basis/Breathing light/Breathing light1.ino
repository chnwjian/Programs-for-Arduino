/*控制板载LED，使其成为呼吸灯（LED亮灭交换渐变，好似呼吸一般）*/

const int LED = 13;

void setup()
{
	//思考：为什么此处没有配置引脚模式？
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