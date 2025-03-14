/*
 Autor: Anna beatriz
 Nome do programa: Potenciômetro
 Data: 14/03/2025
 Descrição: temperatura  
 */



void setup()
{
 Serial.begin(9600);
}

void loop()
{
  int temperatura = analogRead(A0);
 
  if (temperatura < 200){
    Serial.println("muito frio");
    
  }else if(temperatura >= 200 && temperatura < 400 ){
    Serial.println("Ta frio");
    
  }else if (temperatura >= 400 && temperatura < 600){
    Serial.println("Ta ambiente ");
    
  }else if (temperatura >= 600 && temperatura < 800){
    Serial.println("Ta quente ");  
    
    
  }else{
    Serial.println("Muito quente");
}
}