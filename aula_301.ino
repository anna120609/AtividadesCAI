/*
 Autor: Anna beatriz
 Nome do programa:  
 Data: 06/03/2025
 Descrição:
 */





unsigned long tempo;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  tempo = millis();
  Serial.println(tempo);
}