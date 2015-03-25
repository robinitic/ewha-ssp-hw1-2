// Do not remove the include below
#include "ewha-ssp-hw1-2.h"
#define DUTY_CYCLE 20
#define REAR_LED 9
int first=true;
void PWM_Write(int pin,int percent){
	int on_time=DUTY_CYCLE*percent/100.0;
	int off_time=DUTY_CYCLE-on_time;

	digitalWrite(pin,HIGH);
	delay(on_time);
	digitalWrite(pin,LOW);
	delay(off_time);
}
void myAnalogWrite(int pin,int time){
	for(int per=100;per>0;per--){
		for(int t=0;t<(time/100);t+=DUTY_CYCLE){
			PWM_Write(pin,per);
		}
	}
}
//The setup function is called once at startup of the sketch
void setup()
{
// Add your initialization code here
	pinMode(REAR_LED,OUTPUT);
}

// The loop function is called in an endless loop
void loop()
{
//Add your repeated code here
	if(first){
			digitalWrite(REAR_LED,HIGH);
			myAnalogWrite(REAR_LED,10000);
			digitalWrite(REAR_LED,LOW);
			first=false;
		}
}
