#include <SPI.h>
#include <RFID.h>
/* Vengono definiti PIN del RFID reader*/
#define SDA_DIO 10  // 53 per Arduino Mega
#define RESET_DIO 9
#define delayRead 1000 // Time of delay 
#define buzzerPin 4
#define LED_VERDE 7
#define LED_ROSSO 6

/* Viene creata una istanza della RFID libreria */
RFID RC522(SDA_DIO, RESET_DIO);



void setup()
{
  Serial.begin(9600);
  /* Abilita SPI*/
  SPI.begin();
  /* Viene inizilizzato RFID reader */
  RC522.init();
  Serial.println("Setup");
  pinMode(LED_VERDE,OUTPUT);
  pinMode(LED_ROSSO,OUTPUT);
  digitalWrite(LED_ROSSO,HIGH);
}

void loop()
{
  /* Temporary loop counter */
  byte i;

  // Se viene letta una tessera
  if (RC522.isCard())
  {
    // Viene letto il suo codice
    RC522.readCardSerial();
    String codiceLetto = "";
    //Serial.println("Codice delle tessera letto:");

    // Viene caricato il codice della tessera, all'interno di una Stringa
    for (i = 0; i <= 4; i++)
    {
      codiceLetto += String(RC522.serNum[i], HEX);
      codiceLetto.toUpperCase();
    }
    if (codiceLetto.length() == 10) {
      Serial.println(codiceLetto);
      tone(buzzerPin, 3000, 500);
      
      digitalWrite(LED_ROSSO,LOW);
      digitalWrite(LED_VERDE,HIGH);
      delay(delayRead);
      digitalWrite(LED_ROSSO,HIGH);
      digitalWrite(LED_VERDE,LOW);
    }else{
      tone(buzzerPin, 5000, 500);
      delay(delayRead);
    }
  }
}
