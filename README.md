##jormazLib
 
 
#class jormi5Direcciones


Librería de manejo del modulo 5 direcciones + reset + set

jormi5Direcciones(byte pinUP, byte pinDWN, byte pinLFT, byte pinRHT, byte pinMID, byte pinSET, byte pinRST);
void update();


byte estado();     //Devuelve el byte que contiene la lectura de pines
bool arriba();     //True si pulsado UP
bool abajo();      //True si pulsado DWN
bool izquierda();  //True si pulsado LFT
bool derecha();    //True si pulsado RHT
bool centro();     //True si pulsado MID
bool set();        //True si pulsado SET
bool reset();      //True si pulsado RST
void informacion();//Muestra por Serial info de las variables

#class jormiDepura


Librería para envio de mensajes de depuración

jormiDepura();


void texto(String cadena);       //Muestra una cadena de texto + \n
void salto();                    //Inserta salto de línea

void vble(String v, int x);      //Muestra el valor de una variable int, String, bool, float, byte, uLong, long
void vble(String v, String x);
void vble(String v, bool x);
void vble(String v, float x);
void vble(String v, byte x);
void vble(String v, unsigned long x);
void vble(String v, long x);

void binario(String v, byte x);  //Muestra el valor de una variable byte en binario


#class jormiLed


Librería de manejo de leds

jormiLed(byte pin);
void update();


void enciende();                         //Enciende el led (valor = HIGH)
void apaga();                            //Apaga el led (valor = LOW)
byte conectado();                        //Devuelve el numero de pin
void parpadeo( unsigned long periodo );  //0 = sin parpadeo,   !0 = periodo en milisegundos de parpadeo
void informacion();                      //Muestra por Serial info de las variables


#class jormiPulsador


Librería de manejo de pulsadores
	     Version Pull Up - PU
	     			Pulsado = 0v
	     			GND > Pulsador > pinDigital > resistencia > 5V
	     Version Pull Down - PD		
	     			Pulsado = 5v
	     			Pulsado = 5v
	     			GND > resistencia > pinDigital > Pulsador > 5V

jormiPulsador(byte pin, bool tipo);     //tipo:  TRUE = PU,  FALSE = PD 
void update();


bool estado();                          //	return:  TRUE = pulsado,  FALSE = no pulsado
void informacion();                     //Muestra por Serial info de las variables


