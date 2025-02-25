/*
Nome do arquivo:Matematica
 Autor: Anna beatriz
 Data: 24/02/2025
 Descrição: Esse codigo faz  
 
 */

int numeroA = 1000;
int numeroB = 0;
float numeroC = 10;
float numeroD = 3;
float resultado = 0;
float resultadoReal = 0;

void setup()
{
  Serial.begin(9600);

 resultado = map(numeroA, 0, 1023, 0, 100);
 Serial.println(resultado);
  
  resultado = constrain(resultado, 20, 80);
  Serial.println(resultado);
  
  numeroB+= 1;
  Serial.println(numeroB);
  
  numeroB+= 1;
  Serial.println(numeroB);
  
  numeroB+= 1;
  Serial.println(numeroB);
  
  numeroB+= 1;
  Serial.println(numeroB);
  
  numeroB+= 1;
  Serial.println(numeroB);
  
   numeroB+= 1;
  Serial.println(numeroB);
  
   numeroB+= 1;
  Serial.println(numeroB);
  
   numeroB+= 1;
  Serial.println(numeroB);
  
   numeroB+= 1;
  Serial.println(numeroB);
  
   numeroB+= 1;
  Serial.println(numeroB);
  
  
  numeroB-= 1;
  Serial.println(numeroB);
  
  numeroB-= 1;
  Serial.println(numeroB);
  
  numeroB-= 1;
  Serial.println(numeroB);
  
  numeroB-= 1;
  Serial.println(numeroB);
  
   numeroB-= 1;
  Serial.println(numeroB);
  
   numeroB-= 1;
  Serial.println(numeroB);
  
   numeroB-= 1;
  Serial.println(numeroB);
  
   numeroB-= 1;
  Serial.println(numeroB);
  
   numeroB-= 1;
  Serial.println(numeroB);
  
   numeroB-= 1;
  Serial.println(numeroB);
  
  
  resultado = numeroC + numeroD;
  Serial.print("A soma do numeroC com o numeroD eh: ");
  Serial.println(resultado);
  
  resultado /=2.0;
  Serial.println(resultado);
  
  
  resultadoReal = (float)resultado;
  Serial.print("resultado da divisao em numeros decimais: ");
  Serial.println(resultadoReal,1);
  
}

void loop()
{
 
}