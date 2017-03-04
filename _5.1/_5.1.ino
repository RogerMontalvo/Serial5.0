/************************************************************************
**                                                                     **
**                              TÍTOL:                                 ** 
**              Posar un nom representatiu del programa                **
**                                                                     **
** NOM: Nom de l'Alumne                               DATA: xx/xx/20xx **
************************************************************************/
//**************************** INCLUDE **********************************


//*************************** VARIABLES *********************************

float r1, r2;             // variables for the R's
float rSerie, rParalel;   // variables for the results

//**************************** SETUP ************************************

void setup()                  // CONDICIONS INICIALS
{                           
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
  Serial.println ("") ;
}




//**************************** LOOP *************************************

void loop()                  // BUCLE
{
  while (Serial.available() > 0) {  // if there's any serial available, read it
    
    r1 = Serial.parseInt();// look for valid int the incoming serial stream
    
    Serial.print ("El valor de r1 es: ");
    Serial.println ( r1) ;
    Serial.print ("El valor de r2 es: ");
       
    r2 = Serial.parseInt();
   
    Serial.println ( r2) ;
    Serial.println ("") ;

    if (Serial.read() == '\n') { //look for newline. Is the end of your sentence
      
//    CODI ALUMNE (calcula r1 i r2 en serie i paral·lel, mostra resultats i                      
               //  fa de nou la pregunta inicial)

rSerie= r1+r2 ;

rParalel= (r1*r2)/(r1+r2) ;

Serial.print ( "Les resistencies en serie valen: ") ;
//Serial.print (" ");   -També per ficar espai
Serial.println ( rSerie) ;

Serial.print ( "Les resistencies en paralel valen: ") ;
Serial.println ( rParalel) ;
Serial.println ("") ;

Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
Serial.println ("") ;




               
    }
  }
}                            

  
//*************************** FUNCIONS **********************************
