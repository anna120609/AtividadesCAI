
/*
 Autor: Anna beatriz
 Nome do programa: Switch Case 
 Data: 06/03/2025
 Descrição: Um programa que vai avaliar a temperatura, e fazer um texto mostrasndo no Munitor Serial.
 */

#define pinLedVermelho 13
#define pinLedAmarelo 12
#define pinLedAzul 11
#define pinLedBranco 10
#define pinLedVerde 9 


void setup()
{
 pinMode(pinLedVermelho, OUTPUT);
  pinMode(pinLedAmarelo, OUTPUT);
  pinMode(pinLedAzul, OUTPUT);
  pinMode(pinLedBranco, OUTPUT);
  pinMode(pinLedVerde, OUTPUT);
  
  int temperatura = 1;
  
  Serial.begin(9600);
    
    switch (temperatura)
  {
    case 0:
    digitalWrite(pinLedVermelho, HIGH);
    Serial.println("pessima");
    break;
    
    case 1:
    digitalWrite(pinLedAmarelo, HIGH);
    Serial.println("ruim");
    break;
    
    case 2:
    digitalWrite(pinLedAzul, HIGH);
    Serial.println("normal");
    break;
    
    case 3:
    digitalWrite(pinLedBranco, HIGH);
    Serial.println("boa");
    break;
    
    case 4:
    digitalWrite(pinLedVerde, HIGH);
    Serial.println("excelente");
    break;
      
      default:
      Serial.println("erro");
      break;
    }
}

void loop()
{

  
  
}