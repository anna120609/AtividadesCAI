/*
 Autor: Anna beatriz
 Nome do programa: Potenciômetro
 Data: 14/03/2025
 Descrição:Volume de radio  0 ate
 */


void setup()
{
Serial.begin(9600);
}

void loop()
{
  int valor = analogRead(A0);
  // Serial.println(valor);
  
  int resultado = map(valor, 0, 1023, 0, 100);
  Serial.println(resultado);
  
}