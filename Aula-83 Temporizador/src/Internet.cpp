#include <Arduino.h>
#include "internet.h"
#include <WiFi.h>
#include "temporizador.h"


//?--------------CONFIGURACAO DO WIFI------------------


const unsigned long tempoEsperaConexao = 20000;
const unsigned long tempoEsperaReconexao = 1000;

void conectaWiFi()
{
  Serial.printf("Conectando ao WiFi: %s", "SALA09"); //? conectando oa Wifi "MQTT"

  WiFi.begin("SALA09", "info@134"); //? conectado o Wifi

  unsigned long tempoInicialWiFi = millis();

  while (WiFi.status() != WL_CONNECTED && millis() - tempoInicialWiFi < tempoEsperaConexao) //? retornar numero 3, para "conectado"
  {
    Serial.print(".");
    delay(500);
  }

  if (WiFi.status() == WL_CONNECTED)
  {
    Serial.println("\nWiFi Conectado com sucesso! "); //? conectado
    Serial.print("Ëndereco IP:");                     //?Mostra o endereco do IP
    Serial.println(WiFi.localIP());
  }

  else
  {
    Serial.println("\nFalha ao conectar no WiFi. Verifique o nome da rede e a senha");
  }
}

void checkWiFi()
{
  unsigned long tempoAtual = millis();
  static unsigned long tempoUltimaConexao = 0;
  if (tempoAtual - tempoUltimaConexao > tempoEsperaReconexao)
  {
    if (WiFi.status() != WL_CONNECTED)
    {
      Serial.println("\n Conexao Perdida! Tentando Reconectar...");
      conectaWiFi();
    }
    tempoUltimaConexao - tempoAtual;
  }
}
