#ifndef WIFI_CONN_H
#define WIFI_CONN_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Conecta a uma rede Wi-Fi usando o chip CYW43 da Pico W.
 *
 * @param ssid     Nome da rede Wi-Fi (SSID).
 * @param password Senha da rede Wi-Fi.
 */
void connect_to_wifi(const char *ssid, const char *password);

#ifdef __cplusplus
}
#endif

#endif // WIFI_CONN_H