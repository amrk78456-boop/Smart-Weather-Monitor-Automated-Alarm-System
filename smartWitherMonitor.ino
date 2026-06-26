#include"DHT.h"

DHT dht( 2 , DHT11);
int buzzerPin = 8;
int led = 9 ; 
float temp ;
float humidity;
void setup()
{
  dht.begin() ;
  Serial.begin (9600) ;
  pinMode ( buzzerPin , OUTPUT) ;
  pinMode ( led , OUTPUT) ; 

}

void loop()
{
  delay ( 2000 ) ;
 temp = dht.readTemperature() ; 
 humidity = dht.readHumidity() ;
 Serial.print ("temperatue :  ") ;
 Serial.print ( temp) ;
 Serial.println ( " C ") ;
 if ( temp > 32 ) 
 {
   digitalWrite( buzzerPin , HIGH) ;
   digitalWrite( led , HIGH) ;
   
 }
 Serial.print (" humidity :  " ) ;
 Serial.print ( humidity) ;
 Serial.println ( "%") ;
}