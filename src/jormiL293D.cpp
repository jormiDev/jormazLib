

#ifndef __jormiL293D_HPP__
#include "jormiL293D.hpp"

#include "Arduino.h"

#define LOW 0

/*
	Constructor 2 motores
 */
jormiL293D::jormiL293D(int IN1, int IN2, int IN3, int IN4)
{
  pinMode(IN1, OUTPUT);  
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  _IN1 = IN1;
  _IN2 = IN2;
  _IN3 = IN3;
  _IN4 = IN4;
}


/*
	Mueve avante
*/	
bool jormiL293D::avante(int speed)
{
	Serial.print("avante     vel. ");		// * * * * DEBUG * * * *
	Serial.println(speed);

	
  analogWrite(_IN1, speed);
  analogWrite(_IN2, LOW);
  analogWrite(_IN3, speed);
  analogWrite(_IN4, LOW);  
  return true;
}


/*
	mueve atras
*/
bool jormiL293D::atras(int speed)
{


	Serial.print("atras     vel.");		// * * * * DEBUG * * * *
	Serial.println(speed);


  analogWrite(_IN1, LOW);
  analogWrite(_IN2, speed);
  analogWrite(_IN3, LOW);
  analogWrite(_IN4, speed); 
  return true;
}


/*
	mueve izqda
*/
bool jormiL293D::babor(int speed)
{


	Serial.print("babor     vel.");		// * * * * DEBUG * * * *
	Serial.println(speed);

	
  analogWrite(_IN1, speed);
  analogWrite(_IN2, LOW);
  analogWrite(_IN3, LOW);
  analogWrite(_IN4, speed);
  return true;
}


/*
	mueve derecha
*/
bool jormiL293D::estribor(int speed)
{

	Serial.print("estribor     vel.");		// * * * * DEBUG * * * *
	Serial.println(speed);


  analogWrite(_IN1, LOW);
  analogWrite(_IN2, speed);
  analogWrite(_IN3, speed);
  analogWrite(_IN4, LOW);
  return true;  
}


/*
	paro
*/
bool jormiL293D::stop()
{

	Serial.println("stop");		// * * * * DEBUG * * * *

	
  analogWrite(_IN1, LOW);
  analogWrite(_IN2, LOW);
  analogWrite(_IN3, LOW);
  analogWrite(_IN4, LOW); 
  return true;  
}

#endif