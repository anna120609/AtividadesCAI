/*
 Autor: Anna beatriz
 Nome do programa: estruturs de decisão
 Data: 28/02/2025
 Descrição: calculadora IMC
 */







void setup()
{
 Serial.begin(9600);
  
  int meuPeso = 90; 
  float minhaAltura = 1.75;
  
  float IMC =0;
  
  IMC = meuPeso / sq(minhaAltura); 
  Serial.println(IMC);
  
  if(IMC <18.5){
    Serial.println("abaixo do peso normal"); 
    
  }else if(IMC <=24.9){
    Serial.println("peso normal");
  
  }else if(IMC <= 29.9){
    Serial.println("Excesso de peso");
    
  }else if(IMC <= 34.9){
     Serial.println("Excesso de peso");
 
    }else if(IMC <= 39.9){
    Serial.println("obesidade 2");
    
  }else{
    Serial.println("obesidade 3");
}

}
    void loop()
    {
      
      
    }
