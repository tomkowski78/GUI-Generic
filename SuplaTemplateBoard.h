#ifndef SuplaTemplateBoard_h
#define SuplaTemplateBoard_h

#include <pgmspace.h>


enum _board
{
  BOARD_ELECTRODRAGON = 1,
  BOARD_INCAN3,
  BOARD_MELINK,
  BOARD_NEO_COOLCAM,
  BOARD_SHELLY1,
  BOARD_SHELLY2,
  BOARD_SONOFF_BASIC,
  BOARD_SONOFF_DUAL_R2,
  BOARD_SONOFF_S2X,
  BOARD_SONOFF_TH,
  BOARD_SONOFF_TOUCH,
  BOARD_SONOFF_TOUCH_2CH,
  BOARD_SONOFF_TOUCH_3CH,
  BOARD_SONOFF_4CH,
  BOARD_YUNSHAN,
  BOARD_YUNTONG_SMART,
  MAX_MODULE
};

const char BOARD_NULL[] PROGMEM = "BRAK";
const char ELECTRODRAGON[] PROGMEM = "ElectroDragon";
const char INCAN3[] PROGMEM = "inCan3";
const char MELINK[] PROGMEM = "Melink";
const char NEO_COOLCAM[] PROGMEM = "Neo Coolcam";
const char SHELLY1[] PROGMEM = "Shelly 1";
const char SHELLY2[] PROGMEM = "Shelly 2";
const char SONOFF_BASIC[] PROGMEM = "SONOFF BASIC";
const char SONOFF_DUAL_R2[] PROGMEM = "SONOFF DUAL R2";
const char SONOFF_S2X[] PROGMEM = "SONOFF S2X";
const char SONOFF_TH[] PROGMEM = "SONOFF TH";
const char SONOFF_TOUCH[] PROGMEM = "SONOFF TOUCH";
const char SONOFF_TOUCH_2CH[] PROGMEM = "SONOFF TOUCH DUAL";
const char SONOFF_TOUCH_3CH[] PROGMEM = "SONOFF TOUCH TRIPLE";
const char SONOFF_4CH[] PROGMEM = "SONOFF 4CH";
const char YUNSHAN[] PROGMEM = "Yunshan";
const char YUNTONG_SMART[] PROGMEM = "YUNTONG Smart";

const char* const BOARD_P[MAX_MODULE] PROGMEM = {BOARD_NULL,       ELECTRODRAGON,    INCAN3,         MELINK,     NEO_COOLCAM,  SHELLY1,
                                                 SHELLY2,          SONOFF_BASIC,     SONOFF_DUAL_R2, SONOFF_S2X, SONOFF_TH,    SONOFF_TOUCH,
                                                 SONOFF_TOUCH_2CH, SONOFF_TOUCH_3CH, SONOFF_4CH,     YUNSHAN,    YUNTONG_SMART};

void chooseTemplateBoard(uint8_t board);

#endif  // SuplaTemplateBoard_h
