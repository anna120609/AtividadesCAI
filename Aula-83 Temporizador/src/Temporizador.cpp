#include "temporizador.h"
#include <Arduino.h>

/**
 * @brief Construtoe da classe temporizador
 *
 * @param tempo tempo no qual ocorre o temporizador
 */
temporizador::temporizador(unsigned long tempo_ms)
{
    intervalo = tempo_ms;
    inicio= 0;
    ativo = false;

}

/**
 * @brief inicializa o temporizador
 *
 */
void temporizador::iniciar()
{
    ultimoTempo = millis();
    ativo = true;
}

/**
 * @brief Para o temporizador
 */
void temporizador::parar()
{
    ativo = false;
}

/**
 * @brief Reinicia o temporizador
 */
void temporizador::reiniciar()
{
    ultimoTempo = millis();
    ativo = true;
}

/**
 * @brief Retorna true se o intervalo tiver passado desde o iniciar().
 */
bool temporizador::estaPronto()
{

    if (!ativo)return false;

    return (millis() - ultimoTempo >= intervalo);
}

/**
 * @brief Retorna true se estiver ativo.
 */
bool temporizador::estaAtivo()
{
    return ativo = true;
}

/**
 * @brief Altera o intervalo
 */
void temporizador::definirIntervalo(unsigned long tempo_ms)
{
intervalo = tempo_ms;
}



