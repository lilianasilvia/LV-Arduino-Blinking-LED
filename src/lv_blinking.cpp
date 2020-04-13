#include <lv_blinking.h>

void setup_AVM_Blink(){
	pinMode(LED_BUILTIN,OUTPUT);
}

void AVM_Blink(int durata){
	digitalWrite(LED_BUILTIN,HIGH);
	delay(durata);
	digitalWrite(LED_BUILTIN,LOW);
	delay(durata);
}