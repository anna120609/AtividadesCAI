/*
Nome do arquivo:Matematica
 Autor: Anna beatriz
 Data: 24/02/2025
 Descrição: Matematica 
 
 */

//**********DECLARAÇÃO DE VARIAVEIS GLOBAIS**********
int numeroA =10;
int numeroB =3;
int resultado =0;
float resultadoReal = 0;

void setup()
{
  Serial.begin(9600); //baud rate bit's por segundo (bps)
  
  //****SOMA****
  resultado = numeroA + numeroB;
  Serial.print("A soma do numeroA com o numeroB eh: ");
  Serial.println(resultado);
  
  //****SUBTRAÇÃO****
  resultado = numeroB - numeroA;
  Serial.print("A subtração do numero B pelo A eh: ");
  Serial.println(resultado);
  
  //**** MULTIPLICAÇÃO****
  resultado = numeroA * numeroB;
  Serial.print("A multiplicacao do numeroA pelo numeroB eh: ");
  Serial.println(resultado);
  
  //*****DIVISÃO****
  resultado = numeroA / numeroB;
  Serial.print("A divisao de A por B eh: ");
  Serial.println(resultado);
  resultado = numeroA % numeroB; //retorna o resto da divisão
  Serial.print("e sobra ");
  Serial.println(resultado);
  resultadoReal = numeroA / numeroB;
  Serial.println(resultado);
  
  
 //divisão com numeros decimais
  resultadoReal = (float)numeroA / (float)numeroB;
  Serial.println(resultadoReal,1); //mostra apenas uma casa decimal
  
  //****Potenciação****
  resultadoReal = pow(numeroA, numeroB); //numeroA elevado a numeroB
  Serial.print("numero A elevado a numero B: ");
  Serial.println(resultadoReal,0); //sem casas decimais
  
  //****AO QUADRADO****
  resultado = sq(numeroB); //square (quadrado)
  Serial.print("numeroB ao quadrado: ");
  Serial.println(resultado);
  
  //****RAIZ QUADRADA****
  resultadoReal = sqrt (numeroA); //square root (raiz quadrado)
  Serial.print("a raiz quadrada de numeroA: ");
  Serial.println(resultadoReal);
  
  
  //****MODULO****
  resultado = abs(numeroA * -1);
  Serial.println(resultado);
  
  //****RESTRIÇÃO****
  resultado = constrain(numeroA, 4, 8); //estourou o limite superior
  Serial.println(resultado);
  resultado = constrain(numeroB, 4, 8); //estourou o limite inferior
  Serial.println(resultado);
  resultado = constrain(numeroA, 0, 100); //dentro do limite
  Serial.println(resultado);
  
  
 //****REMAPEAMENTO****
  resultado = map(24, -35, 50, 0, 10);
  //map(valor, deMenor, deMaior, paraMenor, paraMaior);
  Serial.println(resultado);
  //
  Serial.println(resultado);
  
  //****OPERADORES DE ATRIBUIÇÃO****
  //INCREMENTO (+1)
   numeroA++; //pos incremento
  ++numeroA; //pre incremento
  
  int valor = 1;
  Serial.println(valor++);
  
  
  //DESCREMENTO (-1)
  numeroA--; //pos decremento
  --numeroA; //pre decremento
  
  //numeroA = numeroA + 3;
  numeroA += 3;
  
  //numeroA = numeroA - 3;
  numeroA -= 3;
  
  //numeroA = numeroA * 3;
  numeroA *= 3;
  
  //numeroA = numeroA / 5;
  numeroA /= 5;
  
  
  
}

void loop()
{ 
}
               
               

