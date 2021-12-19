/*
  Drive.h - Library for controlling Robot Car with L298x bridge series
  Created by Oladapo E. Ajala, November 13, 2018.
  Released into the public domain.
  Copy right InvenTech inc.
  
  jormiL293D_h
  Libreria manejo de motores DC via L293D
  v0.1		20210729		adaptación del original Drive
    
*/

#ifndef __jormiL293D_HPP__
#define __jormiL293D_HPP__

#include "Arduino.h"

class jormiL293D
{
  public:
  
	/*
		Constructor 2 motores
	*/
    jormiL293D(int IN1, int IN2, int IN3, int IN4);
	
	/*
		Mueve avante
	*/		
    bool avante(int speed);			// speed = 0 ..255
	
	/*
		mueve atras
	*/
    bool atras(int speed);
	
	/*
		mueve derecha
	*/
    bool estribor(int speed);
	
	/*
		mueve izqda
	*/
    bool babor(int speed);
		
	/*
		paro
	*/
    bool stop();
	
  private:
	int _IN1;
	int	_IN2;
	int _IN3;
	int _IN4;
};

#endif