/*
	Jormi_Depura_h
	Librería para envio de mensajes de depuración
	v0.1	20200906
	v0.2	20210130
	v0.3	20210212	añadida sobrecarga y byte en binario

*/


#ifndef Jormi_Depura_h
#define Jormi_Depura_h

#include "Arduino.h"

class Jormi_Depura
{
private:	
		
public:

/*	
	Constructor
*/
Jormi_Depura();


/*
	texto
	Muestra una cadena de texto + \n
	Entrada: cadena de texto
*/
void texto(String cadena);


/*
	salto
	Inserta linea en blanco
*/
void salto();


/*
	xInt
	Muestra el valor de una variable INT
*/
void vble(String v, int x);


/*
	xString
	Muestra el valor de una variable String
*/
void vble(String v, String x);


/*
	xBool
	Muestra el valor de una variable bool
*/
void vble(String v, bool x);


/*
	xFloat
	Muestra el valor de una variable Float
*/
void vble(String v, float x);


/*
	xByte
	Muestra el valor de una variable byte
*/
void vble(String v, byte x);


/*
	xBinario
	Muestra el valor de una variable byte en binario
*/
void binario(String v, byte x);


/*
	xULong
	Muestra el valor de una variable unsigned long
*/
void vble(String v, unsigned long x);


/*
	xLong
	Muestra el valor de una variable long
*/
void vble(String v, long x);



};

#endif
