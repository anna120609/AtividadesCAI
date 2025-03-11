/*
 Autor: Anna beatriz
 Nome do programa: botao  
 Data: 11/03/2025
 Descrição: piscar led quando aperta o botao 
 */

#define pinBotao 12
#define pinLedAzul 13
#define tempoLigado 200


void setup()
{
  Serial.begin(9600);
  
  pinMode(pinLedAzul, OUTPUT);
  pinMode(pinBotao, INPUT);
}

void loop()
{
 bool estadoBotao = digitalRead(pinBotao);
  Serial.println(estadoBotao);
  
  
  if(estadoBotao){
  
  digitalWrite(pinLedAzul, HIGH);  
  delay(tempoLigado);              
  digitalWrite(pinLedAzul, LOW);   
  delay(tempoLigado);           
  }
  
  
  
  
  }





