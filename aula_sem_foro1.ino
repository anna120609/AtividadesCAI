/*
 Autor: Anna beatriz
 Nome do programa: Pisca-pisca
 Data: 19/02/2025
 Descrição: Meu primeiro programa em C 
 */


void setup ()
{
  pinMode (13, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);
}

void loop()
{
  digitalWrite (13, HIGH);
    delay (5000);
  digitalWrite (13, LOW);
  
  digitalWrite (11, HIGH);
  delay (3000);
  digitalWrite (11, LOW);
  
  digitalWrite (12, HIGH);
  delay (2000);
  digitalWrite (12, LOW);
}