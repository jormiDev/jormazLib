#include "Arduino.h"
#include "Jormi_Depura.h"


/*	Constructor
*/
Jormi_Depura::Jormi_Depura(){
	Serial.print("lib_depura * * * OK\n");
}


/*
	texto
	Muestra una cadena de texto + \n
	Entrada: cadena de texto
*/
void Jormi_Depura::texto(String cadena)
{
	Serial.print("\t\t");
	Serial.println(cadena);
}


/*
	salto
	Inserta linea en blanco
*/
void Jormi_Depura::salto()
{
	Serial.println("");
}


/*
	xInt
	Muestra el valor de una variable INT
*/
void Jormi_Depura::vble(String v, int x)
{
	Serial.print("(Int)\t\t");
	Serial.print(v);
	Serial.print("\t = \t");
	Serial.println(x);
}

/*
	xString
	Muestra el valor de una variable String
*/
void Jormi_Depura::vble(String v, String x)
{
	Serial.print("(String)\t");
	Serial.print(v);
	Serial.print("\t = \t");
	Serial.println(x);
}

/*
	xBool
	Muestra el valor de una variable bool
*/
void Jormi_Depura::vble(String v, bool x)
{
	Serial.print("(Bool)\t\t");
	Serial.print(v);
	Serial.print("\t = \t");
	Serial.println(x);
}

/*
	xFloat
	Muestra el valor de una variable Float
*/
void Jormi_Depura::vble(String v, float x)
{
	Serial.print("(Float)\t\t");
	Serial.print(v);
	Serial.print("\t = \t");
	Serial.println(x,5);
}


/*
	xByte
	Muestra el valor de una variable byte
*/
void Jormi_Depura::vble(String v, byte x)
{
	Serial.print("(Byte)\t\t");
	Serial.print(v);
	Serial.print("\t = \t");
	Serial.println(x,5);
}


/*
	xULong
	Muestra el valor de una variable unsigned long
*/
void Jormi_Depura::vble(String v, unsigned long x)
{
	Serial.print("(Unsigned long)\t\t");
	Serial.print(v);
	Serial.print("\t = \t");
	Serial.println(x,5);
}

/*
	xLong
	Muestra el valor de una variable long
*/
void Jormi_Depura::vble(String v, long x)
{
	Serial.print("(Long)\t\t");
	Serial.print(v);
	Serial.print("\t = \t");
	Serial.println(x,5);
}

/*
	xByte
	Muestra el valor de una variable byte en binario
*/
void Jormi_Depura::binario(String v, byte x)
{
	Serial.print("(En binario)\t\t");
	Serial.print(v);
	Serial.print("\t = \t");
	for (int b = 7; b >= 0; b--){
		Serial.print(bitRead(x, b));
	}
	Serial.println("");
}