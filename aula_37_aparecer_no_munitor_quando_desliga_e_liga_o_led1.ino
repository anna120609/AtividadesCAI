#include <LiquidCrystal_I2C.h>

/*
 Autor: Anna beatriz
 Nome do programa: LCD
 Data: 14/03/2025
 Descrição: Aparecer no LCD quando ligar led e desligar 
 */

#define Botao 12
#define pinLedVermelho 13


LiquidCrystal_I2C lcd (0x27, 16, 2);


int estadoAnterior = 0;
int estadoBotao = 0;
int estadoLed = 0;



void setup()
{
 lcd.init();
 lcd.backlight();
 pinMode(Botao, INPUT);
 pinMode(pinLedVermelho, OUTPUT);
  
}

void loop()
{
  int estadoAtual = digitalRead(Botao);
    if(estadoAtual == 1 && estadoAnterior == 0) {
      estadoLed = !estadoLed;
      digitalWrite(pinLedVermelho, estadoLed);
    if(estadoLed == 1){
      lcd.setCursor(0,0);
      lcd.print("LED LIGADO   ");
      
    }else{
      lcd.setCursor(0,0);
      lcd.print("LED DESLIGADO");
      
    }
    }
  
  estadoAnterior = estadoAtual;
  
}
   
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      