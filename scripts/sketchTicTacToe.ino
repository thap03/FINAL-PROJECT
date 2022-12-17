//FINAL PROJECT
#include <WiFI.h>
#include <MQTT.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define LED_RED1  0
#define LED_RED2 15
#define LED_RED3 5

#define LED_BLUE1 2
//#define LED_BLUE2 
//#define LED_BLUE3 

//#define LED_GREEN1 
//#define LED_GREEN2 
//#define LED_GREEN3 

void setup() {
  pinMode(LED_RED1, OUTPUT);
  pinMode(LED_RED2, OUTPUT);
  pinMode(LED_RED3, OUTPUT);

  pinMode(LED_BLUE1, OUTPUT);
  //pinMode(LED_BLUE2, OUTPUT);
  //pinMode(LED_BLUE3, OUTPUT);

  //pinMode(LED_GREEN1, OUTPUT);
  //pinMode(LED_GREEN2, OUTPUT);
  //pinMode(LED_GREEN3, OUTPUT);

}


void loop() {
  digitalWrite(LED_RED1, HIGH); 
  digitalWrite(LED_RED2, HIGH);
  digitalWrite(LED_RED3, HIGH);
  
  digitalWrite(LED_BLUE1, HIGH); 
  //digitalWrite(LED_BLUE2, HIGH);
  //digitalWrite(LED_BLUE3, HIGH);

  //digitalWrite(LED_GREEN1, HIGH); 
  //digitalWrite(LED_GREEN2, HIGH);
  //digitalWrite(LED_GREEN3, HIGH);

  delay(1000);  

  digitalWrite(LED_RED1, LOW);   
  digitalWrite(LED_RED2, LOW);
  digitalWrite(LED_RED3, LOW);

  digitalWrite(LED_BLUE1, LOW);   
 // digitalWrite(LED_BLUE2, LOW);
 //digitalWrite(LED_BLUE3, LOW);

  //digitalWrite(LED_GREEN1, LOW); 
  //digitalWrite(LED_GREEN2, LOW);
  //digitalWrite(LED_GREEN3, LOW);

  delay(1000);                       
}
