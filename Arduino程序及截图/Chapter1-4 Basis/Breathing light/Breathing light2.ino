/*控制板载LED，使其成为呼吸灯（LED亮灭交换渐变，好似呼吸一般）*/

const int LED = 13;
int brightness = 0;
int fadeAmount = 5;

void setup()
{

}

void loop()
{
	analogWrite(LED, brightness);
	brightness = brightness + fadeAmount;
	if (brightness == 0 || brightness == 255)
	{
		fadeAmount = -fadeAmount;
	}

	delay(30);
}