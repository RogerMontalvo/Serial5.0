/************************************************************************
**                                                                     **
**                              TÍTOL:                                 ** 
**              Posar un nom representatiu del programa                **
**                                                                     **
** NOM: Nom de l'Alumne                               DATA: xx/xx/20xx **
************************************************************************/
//**************************** INCLUDE **********************************
#include <stdio.h>

//*************************** VARIABLES *********************************

int Numero ;
int Control ;

//**************************** SETUP ************************************


void setup()             // CONDICIONS INICIALS
{                           
 Serial.begin (9600) ;
 Serial.println ("Int valor per saber si es enter o senar: ") ;
 


}

//**************************** LOOP *************************************

void loop()                        // BUCLE
{                           
 while (Serial.available()  >0) 
 
{

 Numero= Serial.parseInt () ;
 if ( Serial.read()== '\n') // Preguntem si s'ha acabat de introduir el numero (press enter)
 {

  
 Control= Numero %2 ;
 
 Serial.print ("-El numero ") ; 
 Serial.print (Numero) ;
 if(Control ==0)
{ 
 
 Serial.println (" es Parell ") ;
}
else
{
 Serial.println (" es Senar") ;
}
 Serial.println ("") ;

 Serial.println ("Int valor per saber si es enter: ") ;


}
}
}
//*************************** FUNCIONS **********************************
