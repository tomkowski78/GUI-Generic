
#ifndef _LANGUAGE_ES_S_H_
#define _LANGUAGE_ES_S_H_

//Translated by EñE Partycja Gajek-Nowrot
//Checked by elmaya

#define S_SETTING_WIFI_SSID                                    "Configuración de WIFI"
#define S_WIFI_SSID                                            "Nombre WIFI"
#define S_WIFI_PASS                                            "Contraseña"
#define S_HOST_NAME                                            "Nombre de módulo"
#define S_SETTING_SUPLA                                        "Configuración SUPLA"
#define S_SUPLA_SERVER                                         "Dirección de servidor"
#define S_SUPLA_EMAIL                                          "Correo electrónico"
#define S_SETTING_ADMIN                                        "Datos de administrador"
#define S_LOGIN                                                "Login"
#define S_LOGIN_PASS                                           "Contraseña"
#define S_ROLLERSHUTTERS                                       "Persianas"
#define S_SAVE                                                 "Guardar"
#define S_DEVICE_SETTINGS                                      "Configuración de dispositivo"
#define S_UPDATE                                               "Actualización"
#define S_RESTART                                              "Reiniciar"
#define S_RETURN                                               "Volver"
#define S_TEMPLATE_BOARD                                       "Modelos de placas"
#define S_TYPE                                                 "Tipo"
#define S_RELAYS                                               "RELÉS"
#define S_BUTTONS                                              "BOTONES"
#define S_SENSORS_1WIRE                                        "SENSORES 1Wire"
#define S_SENSORS_I2C                                          "SENSORES i2c"
#define S_SENSORS_SPI                                          "SENSORES SPI"
#define S_SENSORS_OTHER                                        "OTROS SENSORES"
#define S_LED_BUTTON_CFG                                       "LED, CONFIGURACIÓN DE BOTÓN"
#define S_CFG_MODE                                             "Modo"
#define S_QUANTITY                                             "CANTIDAD"
#define S_GPIO_SETTINGS_FOR_RELAYS                             "Parámetros GPIO para los relés"
#define S_RELAY                                                "RELÉ"
#define S_RELAY_NR_SETTINGS                                    "Configuración del relé núm."
#define S_NO_RELAY_NR                                          "Falta el relé núm."
#define S_STATE_CONTROL                                        "Control de estado"
#define S_REACTION_AFTER_RESET                                 "Reacción después de reinicio"
#define S_GPIO_SETTINGS_FOR_BUTTONS                            "Parámetros GPIO para los botones"
#define S_BUTTON                                               "BOTÓN"
#define S_BUTTON_NR_SETTINGS                                   "Parámetros del botón núm."
#define S_NO_BUTTON_NR                                         "Falta el botón núm."
#define S_REACTION_TO                                          "Reacción a"
#define S_GPIO_SETTINGS_FOR_LIMIT_SWITCH                       "Parámetros GPIO para el sensor de apertura"
#define S_LIMIT_SWITCH                                         "INTERRUPTOR DE LÍMITE"
#define S_GPIO_SETTINGS_FOR                                    "Parámetros GPIO para"
#define S_FOUND                                                "Encontrado"
#define S_NO_SENSORS_CONNECTED                                 "Falta de sensores conectados"
#define S_SAVE_FOUND                                           "Guardar encontrado"
#define S_TEMPERATURE                                          "Temperatura"
#define S_NAME                                                 "Nombre"
#define S_ALTITUDE_ABOVE_SEA_LEVEL                             "Altitud sobre el nivel del mar"
#define S_GPIO_SETTINGS_FOR_CONFIG                             "Parámetros GPIO para CONFIG"
#define S_SOFTWARE_UPDATE                                      "Actualización de software"
#define S_DATA_SAVED                                           "Datos guardados"
#define S_RESTART_MODULE                                       "Reinicio de módulo"
#define S_DATA_ERASED_RESTART_DEVICE                           "Datos borrados: reinicia el dispositivo"
#define S_WRITE_ERROR_UNABLE_TO_READ_FILE_FS_PARTITION_MISSING "Error de escritura: no se puede leer el archivo. Falta partición FS."
#define S_DATA_SAVED_RESTART_MODULE                            "Datos guardados: reinicio de módulo."
#define S_WRITE_ERROR_BAD_DATA                                 "Error de escritura: datos incorrectos."

//#### SuplaConfigESP.cpp ####
#define S_ALREADY_INITIATED                            "Ya iniciado"
#define S_NOT_ASSIGNED_CB                              "CB no asignado"
#define S_INVALID_GUID_OR_DEVICE_REGISTRATION_INACTIVE "Identificador GUID incorrecto o registro de dispositivos INACTIVO"
#define S_UNKNOWN_SEVER_ADDRESS                        "Dirección de servidor desconocida"
#define S_UNKNOWN_ID                                   "ID desconocido"
#define S_INITIATED                                    "Iniciado"
#define S_CHANNEL_LIMIT_EXCEEDED                       "Límite de canal superado"
#define S_DISCONNECTED                                 "Desconectado"
#define S_REGISTRATION_IS_PENDING                      "Registro pendiente"
#define S_VARIABLE_ERROR                               "Error de variable"
#define S_PROTOCOL_VERSION_ERROR                       "Error de versión de protocolo"
#define S_BAD_CREDENTIALS                              "Credenciales incorrectas"
#define S_TEMPORARILY_UNAVAILABLE                      "Temporalmente no disponible"
#define S_LOCATION_CONFLICT                            "Conflicto de localización"
#define S_CHANNEL_CONFLICT                             "Conflicto de canales"
#define S_REGISTERED_AND_READY                         "Registrado y listo"
#define S_DEVICE_IS_DISCONNECTED                       "Dispositivo desconectado"
#define S_LOCATION_IS_DISABLED                         "Localización está desactivada"
#define S_DEVICE_LIMIT_EXCEEDED                        "Superado límite de dispositivos"

//#### SuplaCommonPROGMEM.h ####
#define S_OFF                 "APAGADO"
#define S_ON                  "ENCENDIDO"
#define S_LOW                 "BAJO"
#define S_HIGH                "ALTO"
#define S_POSITION_MEMORY     "RECORDAR ESTADO"
#define S_REACTION_ON_PRESS   "PRESIONAR"
#define S_REACTION_ON_RELEASE "SOLTAR"
#define S_REACTION_ON_CHANGE  "CAMBIO DE ESTADO"
#define S_CFG_10_PRESSES      "PRESIONAR 10 VECES"
#define S_5SEK_HOLD           "MANTENER PRESIONADO 5 SEGUNDOS"

//#### SuplaTemplateBoard.h ####
#define S_ABSENT              "AUSENTE"

//#### SuplaWebPageSensor.cpp ####
#define S_IMPULSE_COUNTER                  "Contador de impulsos"
#define S_IMPULSE_COUNTER_DEBOUNCE_TIMEOUT "Límite de tiempo"
#define S_IMPULSE_COUNTER_RAISING_EDGE     "Flanco ascendente"
#define S_IMPULSE_COUNTER_PULL_UP          "Pull-up"
#define S_IMPULSE_COUNTER_CHANGE_VALUE     "Cambio del valor"
#define S_IMPULSE_COUNTER_SETTINGS_NR      "Configuración contador de impulsos núm."
#define S_NO_IMPULSE_COUNTER_NR            "Falta de contador de impulsos núm."

#endif  // _LANGUAGE_ES_S_H_
