// C++ code
//Estruturas de Desião 

//operadores de Comparação
// = atribuição, salvar valor variavel
// == verificar se dois valores são iguais
// != verifica se dois valores são diferentes 
// < verifica se é menor 
// > verifica se é maior 
// <= verifica se é menor ou igual
// >= verifica se é maior ou igual

void setup()
{
  Serial.begin(9600);
  
  int temperatura = 25;
  
 //Se temperatura for maior que 25
  /*if(temperatura >25){
   Serial.println("Quente pra caramba");
  
  }else{//Se não
    Serial.println("Confortavelzinho");
  {
  */
  
  if (temperatura > 30){
    Serial.println("Partiu praia");
    
  }else if(temperatura <= 30 && temperatura > 24){
    Serial.println("Ta gostosinho");
    
  }else if (temperatura <= 24 && temperatura > 18){
    Serial.println("Ta ok");
    
  }else{
    Serial.println("Ta friozinho");
  }
}

void loop()
{
 
}