// Do not remove the include below
#include "ewha-ssp-hw1-2.h"
#define FRONT_LED 10
#define REAR_LED 9

//The setup function is called once at startup of the sketch
void setup()
{
// Add your initialization code here
	pinMode(FRONT_LED,OUTPUT);
	pinMode(REAR_LED,OUTPUT);
}

// The loop function is called in an endless loop
void loop()
{
//Add your repeated code here
	int curFront=0,curRear=255;
	analogWrite(FRONT_LED,curFront);
	analogWrite(REAR_LED,curRear);

	for(int i=1;i<=255;i++){
		curFront++;
		curRear--;
		analogWrite(FRONT_LED,curFront);
		analogWrite(REAR_LED,curRear);
		delay(5000/255);
	}

	for(int i=1;i<=255;i++){
			curFront--;
			curRear++;
			analogWrite(FRONT_LED,curFront);
			analogWrite(REAR_LED,curRear);
			delay(5000/255);
	}
}
