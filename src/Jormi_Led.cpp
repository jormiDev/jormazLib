#include "Arduino.h"
#include "Jormi_Led.h"

/*
	Constructor
*/
Jormi_Led::Jormi_Led(byte pin)
{
	_pin = pin;
	_periodo = 0;
	_estado = LOW;
	_previousMillis  = 0;
	pinMode(_pin, OUTPUT);
	digitalWrite(_pin, LOW);	
}


/*
	Enciende
	Enciende el led (valor = HIGH)
*/
void Jormi_Led::enciende()
{
	_estado = HIGH;
	digitalWrite(_pin, HIGH);
}


/*
	Apaga
	Apaga el led (valor = LOW)
*/
void Jormi_Led::apaga()
{
	_estado = LOW;
	digitalWrite(_pin, LOW);
}


/*
	Conectado
	Devuelve el numero de pin donde esta el led (objeto)
	
	return
		byte pin
*/
byte Jormi_Led::conectado()
{
	return _pin;
}


/*
	Parpadeo
	_parpadeo = 0, el led deja de parpadear
	_parpadeo != 0, periodo en milisegundos
*/
void Jormi_Led::parpadeo( unsigned long periodo )
{
	if( periodo == 0 ){
		_estado = LOW;
		_periodo = 0;
	}else{
		_periodo = abs(periodo);
		_previousMillis = millis();
	}
}


/*
	Update
*/
void Jormi_Led::update()
{
	if(_periodo != 0){
		
		unsigned long currentMillis = millis();
		if( (currentMillis - _previousMillis >= _periodo)&& (_estado == LOW) ){
			_estado = HIGH;
			digitalWrite(_pin, HIGH);
			_previousMillis = currentMillis;
		}
		else if( (currentMillis - _previousMillis >= _periodo)&& (_estado == HIGH) ){
			_estado = LOW;
			digitalWrite(_pin, LOW);
			_previousMillis = currentMillis;
		}
	}else 
		digitalWrite(_pin, _estado);		
}


/*
	Información
	Muestra en ventana de depuración info de las variables
*/
void Jormi_Led::informacion()
{
	Serial.print("Jormi_Led\t_pin\t\t\t = \t");
	Serial.println(_pin);						
	Serial.print("Jormi_Led\t_estado\t\t\t = \t");
	Serial.println(_estado);					
	Serial.print("Jormi_Led\t_periodo\t\t\t = \t");
	Serial.println(_periodo);			
	Serial.print("Jormi_Led\t_previousMillis\t\t = \t");
	Serial.println(_previousMillis); 		
}
