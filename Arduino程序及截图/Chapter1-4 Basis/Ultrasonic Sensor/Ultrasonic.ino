/*使用超声波模块测量距离*/

const int TRIG = 2;
const int ECHO = 3;
const int SPEED = 340;
float distance;
unsigned int time;

void setup()
{
	Serial.begin(9600);
	pinMode(TRIG, OUTPUT);
	pinMode(ECHO, INPUT);
}

void loop()
{
	digitalWrite(TRIG, LOW);
	delayMicroseconds(2);
	digitalWrite(TRIG, HIGH);
	delayMicroseconds(10);
	digitalWrite(TRIG, LOW);

	time = pulseIn(ECHO, HIGH);
	//distance=SPEED*time/1000000*0.5*100=time*0.017
	distance =(float) time*0.017;	
	Serial.print("The distance is ");
	Serial.print(distance);
	Serial.println(" cm.");
	delay(1000);
}