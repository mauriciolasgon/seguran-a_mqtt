#ifndef MQTT_COMM_H
#define MQTT_COMM_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stddef.h>  // Para size_t

/**
 * @brief Configura e inicia a conexão com o broker MQTT.
 *
 * @param client_id Identificador único para este cliente.
 * @param broker_ip Endereço IP do broker (ex.: "192.168.1.1").
 * @param user Nome de usuário para autenticação (pode ser NULL).
 * @param pass Senha para autenticação (pode ser NULL).
 */
void mqtt_setup(const char *client_id, const char *broker_ip, const char *user, const char *pass);

/**
 * @brief Publica uma mensagem em um tópico MQTT.
 *
 * @param topic Nome do tópico (ex.: "sensor/temperatura").
 * @param data Payload da mensagem.
 * @param len Tamanho do payload.
 */
void mqtt_comm_publish(const char *topic, const uint8_t *data, size_t len);

#ifdef __cplusplus
}
#endif

#endif // MQTT_COMM_H