##	jormazLib

#	class jormiMatrix
Libreria para el manejo del la matrixLED del UNO r4 WIFI

	jormiMatrix();

 	void matrixCodigo(DEFINE_DEL_CODIGO);							//Muestra codigo ya definido
  	void matrixTexto(int x, int y, String texto, int velocidad, int direScroll);  	//Scroll  -1 / 0 / 1


#	class jormiDepura
Librería para envio de mensajes de depuración

	jormiDepura();

	void texto(String cadena); 	//Muestra una cadena de texto + \n 
	void salto(); 			//Inserta salto de línea
	void vble(String v, int x); 	//Muestra el "nombre + valor" de una variable  
	void vble(String v, String x); 
	void vble(String v, bool x); 
	void vble(String v, float x); 
	void vble(String v, double x); 
	void vble(String v, byte x); 
	void vble(String v, char x); 
	void vble(String v, word x); 
	void vble(String v, unsigned int x); 
	void vble(String v, unsigned long x); 
	void vble(String v, long x);
	void binario(String v, byte x); //Muestra el valor de una variable byte en binario


#	class jormiL293D
Libreria manejo de motores DC via L293D

	jormiL293D(int IN1, int IN2, int IN3, int IN4);
	jormiL293D(int IN1, int IN2);

	void avanteA(int speed);	// speed = 0 ..255
	void avanteA();			// full speed
	void avanteB(int speed);	
	void avanteB();			    
    	void atrasA(int speed);		
    	void atrasA();			
    	void atrasB(int speed);		
    	void atrasB();			    
    	void stopA();			// speed = 0
	void stopB();			
	void enableA();			// activa motor
	void disableA();		// desactiva motor
	void enableB();
	void disableB();
	void informacion();		// info de los pines conectados


#	class jormiLed
Librería de manejo de leds

	jormiLed(byte pin); 
	
	void update();			// loop update
	void enciende(); 		// valor = HIGH
	void apaga(); 			// valor = LOW
	void parpadeo( unsigned long periodo ); 	// 0 = sin parpadeo, 
							// !0 = periodo en milisegundos de parpadeo 
	void informacion(); 		// info


#	class jormiPulsador
Librería de manejo de pulsadores 
	Version Pull Up - PU 
			Pulsado = 0v GND > Pulsador > pinDigital > resistencia > 5V 
	Version Pull Down - PD 
			Pulsado = 5v Pulsado = 5v GND > resistencia > pinDigital > Pulsador > 5V

	jormiPulsador(byte pin, bool tipo); 	// tipo: TRUE = PU, FALSE = PD 
	void update();				// loop update

	bool estado(); 				// return: TRUE = pulsado, FALSE = no pulsado 
	void informacion(); 			// info


#	class jormi5Direcciones
Librería de manejo del modulo 5 direcciones + reset + set

	jormi5Direcciones(byte pinUP, byte pinDWN, byte pinLFT, byte pinRHT, byte pinMID, byte pinSET, byte pinRST); 

	byte estado(); 			//Devuelve el byte que contiene la lectura de pines 
	bool arriba(); 			//True si pulsado UP 
	bool abajo(); 			//True si pulsado DWN 
	bool izquierda(); 		//True si pulsado LFT 
	bool derecha(); 		//True si pulsado RHT 
	bool centro(); 			//True si pulsado MID 
	bool set(); 			//True si pulsado SET 
	bool reset(); 			//True si pulsado RST 
	void update();			//loop update
	void informacion();		//Muestra por Serial info de las variables
