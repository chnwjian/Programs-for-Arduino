
/*控制板载LED，当按住按键时点亮LED，当放开按键后熄灭LED*/	

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