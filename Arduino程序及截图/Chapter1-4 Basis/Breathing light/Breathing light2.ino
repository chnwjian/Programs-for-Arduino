/*���ư���LED��ʹ���Ϊ�����ƣ�LED���𽻻����䣬���ƺ���һ�㣩*/

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