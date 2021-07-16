/*
	Jormi_Led.h
	Librería de manejo de leds
	v0.1	20200826
	v0.2	20200906
	v0.3	20210129	Multitask	
*/


#ifndef Jormi_Led_h
#define Jormi_Led_h


class Jormi_Led
{
	
private:
	byte _pin;						//Pin arduino del led
	byte _estado;					//Estado apagado/encendido
	unsigned long _periodo;			//0 = no parpadea, !0 = periodo en ms del parpadeo
	unsigned long _previousMillis; 	//Millis del ultimo cambio de estado
	
public:

/*
	Constructor, inicio con led apagado
*/
Jormi_Led(byte pin);


/*
	Enciende
	Enciende el led (valor = HIGH)
*/
void enciende();


/*
	Apaga
	Apaga el led (valor = LOW)
*/
void apaga();


/*
	Conectado
	Devuelve el numero de pin donde esta el led (objeto)
	
	return
		byte pin
*/
byte conectado();


/*
	Parpadeo
	_parpadeo = 0, el led deja de parpadear
	_parpadeo != 0, periodo en milisegundos
*/
void parpadeo( unsigned long periodo );


/*
	Update
*/
void update();


/*
	Información
	Muestra en ventana de depuración info de las variables
*/
void informacion();


};


#endif
