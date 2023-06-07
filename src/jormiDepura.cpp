
#ifndef __jormiDepura_HPP__
#include "jormiDepura.hpp"

#include "Arduino.h"

/*	
	Constructor
*/
jormiDepura::jormiDepura(){
	Serial.print(" jormiDepura	*	*	*	OK\n");
}


/*
	texto
*/
void jormiDepura::texto(String cadena)
{
	Serial.print("\t");
	Serial.println(cadena);
}


/*
	salto
*/
void jormiDepura::salto()
{
	Serial.println("");
}


/*
	xInt
*/
void jormiDepura::vble(String v, int x)
{
	Serial.print("(int)\t");
	Serial.print(v);
	Serial.print("\t = \t");
	Serial.println(x);
}


/*
	xString
*/
void jormiDepura::vble(String v, String x)
{
	Serial.print("(string)\t");
	Serial.print(v);
	Serial.print("\t = \t");
	Serial.println(x);
}

/*
	xBool
*/
void jormiDepura::vble(String v, bool x)
{
	Serial.print("(bool)\t");
	Serial.print(v);
	Serial.print("\t = \t");
	Serial.println(x);
}


/*
	xFloat
*/
void jormiDepura::vble(String v, float x)
{
	Serial.print("(float)\t");
	Serial.print(v);
	Serial.print("\t = \t");
	Serial.println(x,5);
}


/*
	xDouble
*/
void jormiDepura::vble(String v, double x)
{
	Serial.print("(double)\t");
	Serial.print(v);
	Serial.print("\t = \t");
	Serial.println(x,10);
}


/*
	xByte
*/
void jormiDepura::vble(String v, byte x)
{
	Serial.print("(byte)\t");
	Serial.print(v);
	Serial.print("\t = \t");
	Serial.println(x,5);
}


/*
	xChar
*/
void jormiDepura::vble(String v, char x)
{
	Serial.print("(char)\t");
	Serial.print(v);
	Serial.print("\t = \t");
	Serial.println(x,5);
}


/*
	xWord
*/
void jormiDepura::vble(String v, word x)
{
	Serial.print("(word)\t");
	Serial.print(v);
	Serial.print("\t = \t");
	Serial.println(x,5);
}


/*
	xUnsignedInt
*/
void jormiDepura::vble(String v, unsigned int x)
{
	Serial.print("(unsigned int)\t");
	Serial.print(v);
	Serial.print("\t = \t");
	Serial.println(x);
}


/*
	xUnsignedLong
*/
void jormiDepura::vble(String v, unsigned long x)
{
	Serial.print("(unsigned long)\t");
	Serial.print(v);
	Serial.print("\t = \t");
	Serial.println(x,5);
}


/*
	xLong
*/
void jormiDepura::vble(String v, long x)
{
	Serial.print("(long)\t");
	Serial.print(v);
	Serial.print("\t = \t");
	Serial.println(x,5);
}


/*
	xByte
*/
void jormiDepura::binario(String v, byte x)
{
	Serial.print("(convert binario)\t");
	Serial.print(v);
	Serial.print("\t = \t");
	for (int b = 7; b >= 0; b--){
		Serial.print(bitRead(x, b));
	}
	Serial.println("");
}

#endif
