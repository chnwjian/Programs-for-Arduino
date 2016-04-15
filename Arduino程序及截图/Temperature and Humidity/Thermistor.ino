#include <math.h>
#define Rt 100000	//���������ڳ����±����ֵ
#define Rx 10000	//��·�д���������ֵ
#define B 3950.00
void setup()
{

	Serial.begin(9600);

}
void loop()
{

	Serial.println(temperature(0));
	delay(1000);

}
double temperature(int analogPin)
{
	//�����������˵�ѹ
	double Un = (float)analogRead(analogPin) / 1023 * 5.00;
	//����������ֵ����Ƶ���Rt������Դ��ѹ5v
	double Rn = (Rx * Un) / (5.00 - Un);
	//����T=298.15K,����¶�Tn
	double Tn = 1.00 / (1.00 / 298.15 + (log(Rn / Rt)) / B);

	return Tn - 273.15;
}