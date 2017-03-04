/************************************************************************
**                                                                     **
**                              TÍTOL:                                 ** 
**              Posar un nom representatiu del programa                **
**                                                                     **
** NOM: Nom de l'Alumne                               DATA: xx/xx/20xx **
************************************************************************/
//**************************** INCLUDE **********************************


//*************************** VARIABLES *********************************

int Numero[15];
int i;
//**************************** SETUP ************************************


void setup()             // CONDICIONS INICIALS
{                           
 Serial.begin (9600) ;
 Serial.print ("Int numeros per acabar enter per saber la mitja") ;

}

//**************************** LOOP *************************************

void loop()             // BUCLE
{                   
  for (i = 0; i<=15; i++){        
 Numero [i]= Serial.parseInt() ;
  }
}

//*************************** FUNCIONS **********************************
