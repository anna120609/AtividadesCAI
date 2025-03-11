/*
 Autor: Anna beatriz
 Nome do programa: botao  
 Data: 11/03/2025
 Descrição: Ligar led apertando o botao 
 */


#define pinBotao 10
#define pinLedBranco 12 

//-----VARIAVEIS GLOBAIS-------


void setup()
{
 Serial.begin(9600);
    
  pinMode(pinLedBranco, OUTPUT);
  pinMode(pinBotao, INPUT);
}

void loop()
{
  
 
  
 bool estadoBotao = digitalRead(pinBotao);
  Serial.println(estadoBotao);
  
  if(estadoBotao == 1){
    digitalWrite(pinLedBranco, HIGH);
  }else{
    digitalWrite(pinLedBranco, LOW);
  }
}