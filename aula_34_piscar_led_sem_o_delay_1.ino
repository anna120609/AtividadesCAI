/*
 Autor: Anna beatriz
 Nome do programa: botao  
 Data: 11/03/2025
 Descrição:piscar led sem delay
 */

#define pinLedBranco 13
#define Botao 9

bool estadoLed =0;
unsigned long tempoInicial =0;



void setup()
{
  
  pinMode(pinLedBranco, OUTPUT);
  pinMode(Botao, INPUT);
}

void loop()
{
  bool estadoBotao = digitalRead(Botao);
   
  unsigned long tempoAtual = millis();
  
    if (estadoBotao){
    
    if(tempoAtual - tempoInicial >= 100){
      estadoLed = !estadoLed;
      digitalWrite(pinLedBranco, estadoLed);
      tempoInicial = tempoAtual;
    }
    
  }else{
    digitalWrite(pinLedBranco, LOW);
  }
    
}