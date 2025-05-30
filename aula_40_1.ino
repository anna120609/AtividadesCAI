/*
 Autor: Anna beatriz
 Data: 20/03/2025
 Descrição:  
 */
// No 1-botao o numero 0
// No 2-botao o numero 145
// No 3-botao o numero 329
// No 4-botao o numero 505
// No 5-botao o numero 741


#include <LiquidCrystal_I2C.h>
#define valorBotao1 0
#define valorBotao2 145  
#define valorBotao3 329  
#define valorBotao4 505
#define valorBotao5 741
#define valorSolto 1023
#define pinLedA 10
#define pinLedB 11

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print(">LED A OFF");
  lcd.setCursor(0,1);
  lcd.print(" LED B OFF");
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
 
}

void loop()
{
    int valorLeituraAnalogica = analogRead(A0);
    static int valorAnterior = 1023;
    static bool posicao = 0;
    static bool estadoLedA = 0;
    static bool estadoLedB = 0;
 
  //***** TRATAMENTO DOS BOTOES *******
  // NENHUM BOTAO
  if (valorLeituraAnalogica == valorSolto)
   {
     
   }
 
  //BOTAO 1 PRESSIONADO
     else if(valorLeituraAnalogica == valorBotao1 &&
             valorAnterior == 1023)
    {
      posicao = 0;
    }
 
   //BOTAO 2 PRESSIONADO
      else if(valorLeituraAnalogica >= valorBotao2 * 0.9  &&
            valorLeituraAnalogica <= valorBotao2 * 1.1 &&
            valorAnterior == 1023)
    {
      posicao = 1;
    }
 
   //BOTAO 3 PRESSIONADO
    else if(valorLeituraAnalogica >= valorBotao3 * 0.9  &&
            valorLeituraAnalogica <= valorBotao3 * 1.1 &&
            valorAnterior == 1023)
    {
     
    }
   
   //BOTAO 4 PRESSIONADO
   else if(valorLeituraAnalogica >= valorBotao4 * 0.9  &&
            valorLeituraAnalogica <= valorBotao4 * 1.1 &&
            valorAnterior == 1023)
    {
     
    }
 
   //BOTAO 5 PRESSIONADO
      else if(valorLeituraAnalogica >= valorBotao5 * 0.9  &&
            valorLeituraAnalogica <= valorBotao5 * 1.1 &&
            valorAnterior == 1023)
    {
        if(posicao == 0){
          estadoLedA = !estadoLedA;
        }else{
          estadoLedB = !estadoLedB;
        }
    }
 
  valorAnterior = valorLeituraAnalogica;

  //****** FIM DO TRATAMENTO DOS BOTOES ******
 
 
  // ***** ATUALIZA DISPLAY ******
  if(posicao == 0)
  {
    lcd.setCursor(0,0);
    lcd.print(">");
    lcd.setCursor(0,1);
    lcd.print(" ");
    
    lcd.setCursor(7, 0);
    if(estadoLedA){
      lcd.print("ON ");
    }else{
      lcd.print("OFF");
      
    }
  }
  else
    {
    lcd.setCursor(0,1);
    lcd.print(">");
    lcd.setCursor(0,0);
    lcd.print(" ");
    
    lcd.setCursor(7, 1);
    if(estadoLedB){
      lcd.print("ON ");
    }else{
      lcd.print("OFF");
    }
    }
 
  //***** ATUALIZACAO DOS LED ******
 
  digitalWrite(10, estadoLedA);
  digitalWrite(11, estadoLedB);
}
