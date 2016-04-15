/*制作一个电子喇叭*/

const int buttonPin = 11;
const int buzzerPin = 12;

void setup()
{
	pinMode(buttonPin, INPUT);
	pinMode(buzzerPin, OUTPUT);
}

void loop()
{
	if (digitalRead(buttonPin) == LOW)
	{
		digitalWrite(buzzerPin, HIGH);
	}
	else
	{
		digitalWrite(buzzerPin, LOW);
	}
}