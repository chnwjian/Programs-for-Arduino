/*使用超声波模块测量距离*/
/*编写并使用函数*/

float distance;

void setup()
{
	Serial.begin(9600);
	Set_SR04(2, 3);
}

void loop()
{
	distance = Get_SR04(2, 3);
	Serial.print("The distance is ");
	Serial.print(distance);
	Serial.println(" cm.");
	delay(1000);
}

void Set_SR04(int TRIG, int ECHO)
{
	pinMode(TRIG, OUTPUT);
	pinMode(ECHO, INPUT);
}

float Get_SR04(int TRIG,int ECHO)
{
	digitalWrite(TRIG, LOW);
	delayMicroseconds(2);
	digitalWrite(TRIG, HIGH);
	delayMicroseconds(10);
	digitalWrite(TRIG, LOW);
	//distance=SPEED*time/1000000*0.5*100=time*0.017
	return  (float)(pulseIn(ECHO, HIGH))*0.017;
}