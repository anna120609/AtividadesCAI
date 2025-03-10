/*
 Autor: Anna beatriz
 Nome do programa: semaforo  
 Data: 10/03/2025
 Descrição: semaforo sem delay 
 */

#define pinLedVermelho 13
#define pinLedAmarelo 12
#define pinLedVerde 11

unsigned long tempoAnterior = 0;
int estadoSemaforo = 0;

void setup()
{
  pinMode(pinLedVermelho, OUTPUT);
  pinMode(pinLedAmarelo, OUTPUT);
  pinMode(pinLedVerde, OUTPUT);
}

void loop()
{
  unsigned long tempoAtual= millis();
  
  switch (estadoSemaforo) {
    case 0:
    if (tempoAtual - tempoAnterior >= 6000){
      digitalWrite(pinLedVermelho, LOW);
    digitalWrite(pinLedVerde, HIGH);
    estadoSemaforo = 1;
    tempoAnterior = tempoAtual;
    
  } else {
    digitalWrite(pinLedVermelho, HIGH);
    digitalWrite(pinLedVerde, LOW);
    digitalWrite(pinLedAmarelo, LOW);
  }
  break;
  
  case 1:
    if (tempoAtual - tempoAnterior >= 6000){
    digitalWrite(pinLedVerde, LOW);
  digitalWrite(pinLedAmarelo, HIGH);
  estadoSemaforo = 2;
  tempoAnterior = tempoAtual;
  
}
break;

case 2:
if (tempoAtual - tempoAnterior >= 600) {
  digitalWrite(pinLedAmarelo, LOW);
  digitalWrite(pinLedVermelho, HIGH);
  estadoSemaforo = 0;
  tempoAnterior = tempoAtual;
}
break;
}
 
}