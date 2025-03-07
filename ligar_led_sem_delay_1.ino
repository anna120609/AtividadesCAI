
/*
 Autor: Anna beatriz
 Nome do programa: Pisca-pisca
 Data: 07/03/2025
 Descrição: Ligar led sem delay
 */

#define pinLedVermelho 13
#define pinLedAzul 11

unsigned long tempoAtual;
  
  long tempoDecorrido1 = 0;
  long tempoDecorrido2 = 0;


  long tempoLedVermelho = 600;
  long tempoLedAzul = 600;


void setup()
{
  pinMode(pinLedVermelho, OUTPUT);
  pinMode(pinLedAzul, OUTPUT);
}

void loop()
{
  tempoAtual = millis();
  
  if (tempoAtual - tempoDecorrido1 > tempoLedVermelho) {
    tempoDecorrido1 = tempoAtual;
    digitalWrite(pinLedVermelho, !digitalRead(pinLedVermelho));
  }
    
  
  
  if (tempoAtual - tempoDecorrido2 > tempoLedAzul) {
    tempoDecorrido2 = tempoAtual;
    digitalWrite(pinLedAzul, !digitalRead(pinLedAzul));
  }
  
  
  
  
  
  
}