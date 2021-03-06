#ifndef SuplaWebPageRelay_h
#define SuplaWebPageRelay_h

#include "SuplaDeviceGUI.h"
#include "SuplaWebServer.h"

#define PATH_RELAY           "relay"
#define PATH_SAVE_RELAY      "saverelay"
#define PATH_RELAY_SET       "setrelay"
#define PATH_SAVE_RELAY_SET  "savesetrelay"
#define INPUT_MAX_RELAY      "mrl"
#define INPUT_RELAY_GPIO     "rlg"
#define INPUT_RELAY_LEVEL    "irl"
#define INPUT_RELAY_MEMORY   "irm"
#define INPUT_RELAY_DURATION "ird"
#define INPUT_ROLLERSHUTTER  "irsr"

enum _memory_relay {
  MEMORY_RELAY_OFF,
  MEMORY_RELAY_ON,
  MEMORY_RELAY_RESTORE
};
  
#if defined(SUPLA_RELAY) || defined(SUPLA_ROLLERSHUTTER)

class SuplaWebPageRelay {
 public:
  SuplaWebPageRelay();
  void createWebPageRelay();
  void handleRelay();
  void handleRelaySave();
  void handleRelaySet();
  void handleRelaySaveSet();

 private:
  String supla_webpage_relay_set(int save);
  String supla_webpage_relay(int save);
};

extern SuplaWebPageRelay* WebPageRelay;
#endif
#endif  // SuplaWebPageRelay_h
