#include "Arduino.h"
#include "Jormi_Pulsador.h"


/*
	Constructor
	int pin			pin de entrada
*/
Jormi_Pulsador::Jormi_Pulsador(byte pin, bool tipo)
{
	_pin = pin;
	_estado = false;
	_tipo = tipo;
	pinMode(_pin, INPUT);
}


/*
	Estado
	Devuelve estado del pulsador
	
	return
		true, pulsado
		false, no pulsado
*/
bool Jormi_Pulsador::estado()
{
	return _estado;
}
	
	
/*
	Update
*/
void Jormi_Pulsador::update()
{	
	bool x = digitalRead(_pin);
	
	// Serial.print("Jormi_Pulsador\t x\t\t\t = \t");
	// Serial.println(x);	
	// delay(100);
	
	if( _tipo ){

		//	Tipo PullUp

		if( x == LOW )
			_estado =  true;
		else
			_estado =  false;
	
	}else{
			
		//Tipo PullDown

		if( x == HIGH )
			_estado =  true;
		else
			_estado =  false;		
	}
}


/*
	Información
	Muestra en ventana de depuración info de las variables
*/
void Jormi_Pulsador::informacion()
{
	Serial.print("Jormi_Pulsador\t_pin\t\t\t = \t");
	Serial.println(_pin);						
	Serial.print("Jormi_Pulsador\t_estado\t\t\t = \t");
	Serial.println(_estado);					
	Serial.print("Jormi_Pulsador\t_tipo\t\t\t = \t");
	if( _tipo )
		Serial.println("Pull Up");	
	else
		Serial.println("Pull Down");	
}