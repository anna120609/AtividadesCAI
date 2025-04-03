#include <Arduino.h>

const int pinBotao = 3;

//! PROTOTIPOS DAS FUNCOES
//! serve para chamar as funcoes dos codigos

void ligarLed(int);    //! void vazio e nao recebe nada, ele diz que nao vai retornar valores
void desligarLed(int); //! (int) ele serve para retornar valores
void piscarLed(int, unsigned long); //! unsigned long serve para armazenar o tempo 
int somaDeDoisNumeros(int, int); //! int serve para resultados inteiros
void desligarLed(int);

void setup()
{
  pinMode(2, OUTPUT);
  Serial.begin(9600); //! mostrar no munitor serial
}

void loop()
{
  piscarLed(2, 100);
  int resultadoDaSoma = somaDeDoisNumeros(4, 8);
  Serial.println(resultadoDaSoma);
}

void ligarLed(int pin) //! vazio nao recebe nada (void)
{
  digitalWrite(pin, HIGH);
}

void desligarLed(int pin)
{
  digitalWrite(pin, LOW);
}

void piscarLed(int pin, unsigned long tempo) //! unsigned long e para armazenar o tempo
{
  ligarLed(pin); //! voce esta chamando uma variavel dentro de outra variavel
  delay(tempo);
  desligarLed(pin);
  delay(tempo);
}

int somaDeDoisNumeros(int numeroA, int numeroB)
{
  int resultado = numeroA + numeroB; //! atencao se sua variavel for do tipo inteira logo ela deve mostrar um valor inteiro
  return resultado;                  //!(return) para retornar o resultado
}