//*****************************************************************************
// Languages.h
//*****************************************************************************

#ifndef LANGUAGES_H
#define LANGUAGES_H

enum eFrontCover : uint8_t
{
  FRONTCOVER_DE_DE,
  FRONTCOVER_DE_SW,
  FRONTCOVER_DE_BA,
  FRONTCOVER_DE_SA,
  FRONTCOVER_D3,
  FRONTCOVER_CH,
  FRONTCOVER_EN,
  FRONTCOVER_ES,
  FRONTCOVER_FR,
  FRONTCOVER_IT,
  FRONTCOVER_NL,
  FRONTCOVER_SW,
  FRONTCOVER_BINARY,
  FRONTCOVER_COUNT
};

const char sLanguageStr[][20] PROGMEM =
{
  { "German" }, // 00
  { "German SW" }, // 01
  { "German BA" }, // 02
  { "German SA" }, // 03
  { "German MK D3"}, // 04
  { "Swiss German" }, // 05
  { "English" }, // 06
  { "Spanish" }, // 07
  { "French" }, // 08
  { "Italian" }, // 9
  { "Dutch" },  // 10
  { "Swedish" },// 11
  { "Binary" }// 12
};



#ifdef LANGUAGE_EN
const char sWeekday[][2] = {
    { ' ', ' ' }, // 00
    { 'S', 'U' }, // 01
    { 'M', 'O' }, // 02
    { 'T', 'U' }, // 03
    { 'W', 'E' }, // 04
    { 'T', 'H' }, // 05
    { 'F', 'R' }, // 06
    { 'S', 'A' }  // 07
};
#define LANGSTR "en"
#define TXT_SETTINGS "Settings"
#define TXT_ALARM "Alarm"
#define TXT_ON "on"
#define TXT_OFF "off"
#define TXT_HOURBEEP "Hourly beep"
#define TXT_TIMER "Timer"
#define TXT_MINUTES "minutes"
#define TXT_COLOR "Color"
#define TXT_COLORCHANGE "Color change"
#define TXT_BRIGHTNESS "Brightness"
#define TXT_SHOW_TEMP "Show temperature"
#define TXT_AUTO_BRIGHTNESS "Auto brightness"
#define TXT_TRANSITION "Transition animation"
#define TXT_TIMEOUT "Back to clock timeout"
#define TXT_NIGHT_OFF "Switch off at"
#define TXT_DAY_ON "Switch on at"
#define TXT_PURIST_MODE "Purist Mode" 
#define TXT_SHOW_GSI "Show \"GSI\""
#define TXT_SET_DATE_TIME "Set date/time"
#define TXT_ACTIVE "Active"
#define TXT_DATE "Date"
#define TXT_TEXT "Text"
#define TXT_ANIMATION "Animation"
#define TXT_REP_RATE "Repetition rate"
#define TXT_ADMIN "Admin"
#define TXT_TIME_SERVER "Time Server URL"
#define TXT_OW_API_KEY "OpenWeather API Key"
#define TXT_OW_LOCATION "OpenWeather Location"
#define TXT_COVER_LANGUAGE "Language/Dialect"
#endif

#ifdef LANGUAGE_DE
const char sWeekday[][2] = {
    { ' ', ' ' }, // 00
    { 'S', 'O' }, // 01
    { 'M', 'O' }, // 02
    { 'D', 'I' }, // 03
    { 'M', 'I' }, // 04
    { 'D', 'O' }, // 05
    { 'F', 'R' }, // 06
    { 'S', 'A' }  // 07
};
#define LANGSTR "de"
#define TXT_SETTINGS "Einstellungen"
#define TXT_ALARM "Wecker"
#define TXT_ON "ein"
#define TXT_OFF "aus"
#define TXT_HOURBEEP "Stundenalarm"
#define TXT_TIMER "Timer"
#define TXT_MINUTES "Minuten"
#define TXT_COLOR "Farbe"
#define TXT_COLORCHANGE "Farbwechsel"
#define TXT_BRIGHTNESS "Helligkeit"
#define TXT_SHOW_TEMP "Temperaturanzeige"
#define TXT_AUTO_BRIGHTNESS "Auto. Helligkeit"
#define TXT_TRANSITION "Animation für Übergänge"
#define TXT_TIMEOUT "Zurück zur Zeitanzeige nach"
#define TXT_NIGHT_OFF "Ausschalten um"
#define TXT_DAY_ON "Einschalten um"
#define TXT_PURIST_MODE "Puristenmodus" 
#define TXT_SHOW_GSI "\"GSI\" anzeigen"
#define TXT_SET_DATE_TIME "Datum/Zeit setzen"
#define TXT_ACTIVE "Aktiv"
#define TXT_DATE "Datum"
#define TXT_TEXT "Text"
#define TXT_ANIMATION "Animation"
#define TXT_REP_RATE "Wiederholrate"
#define TXT_ADMIN "Admin"
#define TXT_TIME_SERVER "Zeitserver"
#define TXT_OW_API_KEY "OpenWeather API Key"
#define TXT_OW_LOCATION "OpenWeather Standort"
#define TXT_COVER_LANGUAGE "Sprache/Dialekt"
#endif

#ifdef LANGUAGE_FR
const char sWeekday[][2] = {
    { ' ', ' ' }, // 00
    { 'D', 'I' }, // 01
    { 'L', 'U' }, // 02
    { 'M', 'A' }, // 03
    { 'M', 'E' }, // 04
    { 'J', 'E' }, // 05
    { 'V', 'E' }, // 06
    { 'S', 'A' }  // 07
};
#define LANGSTR "fr"
#define TXT_SETTINGS "Param�tres"
#define TXT_ALARM "R�veil"
#define TXT_ON "on"
#define TXT_OFF "off"
#define TXT_HOURBEEP "Alarme heure"
#define TXT_TIMER "Minuteur"
#define TXT_MINUTES "Minutes"
#define TXT_COLOR "Coleur"
#define TXT_COLORCHANGE "Color change"
#define TXT_BRIGHTNESS "Brightness"
#define TXT_SHOW_TEMP "Show temperature"
#define TXT_AUTO_BRIGHTNESS "Auto brightness"
#define TXT_TRANSITION "Transition animation"
#define TXT_TIMEOUT "Back to clock timeout"
#define TXT_NIGHT_OFF "Switch off at"
#define TXT_DAY_ON "Switch on at"
#define TXT_PURIST_MODE "Purist Mode"
#define TXT_SHOW_GSI "Show \"GSI\""
#define TXT_SET_DATE_TIME "Set date/time"
#define TXT_ACTIVE "Active"
#define TXT_DATE "Date"
#define TXT_TEXT "Text"
#define TXT_ANIMATION "Animation"
#define TXT_REP_RATE "Repetition rate"
#define TXT_ADMIN "Admin"
#define TXT_TIME_SERVER "Time Server URL"
#define TXT_OW_API_KEY "OpenWeather API Key"
#define TXT_OW_LOCATION "OpenWeather Location"
#define TXT_COVER_LANGUAGE "Language/Dialect"
#endif

#ifdef LANGUAGE_IT
const char sWeekday[][2] = {
    { ' ', ' ' }, // 00
    { 'D', 'O' }, // 01
    { 'L', 'U' }, // 02
    { 'M', 'A' }, // 03
    { 'M', 'E' }, // 04
    { 'G', 'I' }, // 05
    { 'V', 'E' }, // 06
    { 'S', 'A' }  // 07
};
#define LANGSTR "it"
#define TXT_SETTINGS "Settings"
#define TXT_ALARM "Alarm"
#define TXT_ON "on"
#define TXT_OFF "off"
#define TXT_HOURBEEP "Hourly beep"
#define TXT_TIMER "Timer"
#define TXT_MINUTES "minutes"
#define TXT_COLOR "Colori"
#define TXT_COLORCHANGE "Color Change"
#define TXT_BRIGHTNESS "Brightness"
#define TXT_SHOW_TEMP "Show temperature"
#define TXT_AUTO_BRIGHTNESS "Auto brightness"
#define TXT_TRANSITION "Transition animation"
#define TXT_TIMEOUT "Back to clock timeout"
#define TXT_NIGHT_OFF "Switch off at"
#define TXT_DAY_ON "Switch on at"
#define TXT_PURIST_MODE "Purist Mode" 
#define TXT_SHOW_GSI "Show \"GSI\""
#define TXT_SET_DATE_TIME "Set date/time"
#define TXT_ACTIVE "Active"
#define TXT_DATE "Date"
#define TXT_TEXT "Text"
#define TXT_ANIMATION "Animation"
#define TXT_REP_RATE "Repetition rate"
#define TXT_ADMIN "Admin"
#define TXT_TIME_SERVER "Time Server URL"
#define TXT_OW_API_KEY "OpenWeather API Key"
#define TXT_OW_LOCATION "OpenWeather Location"
#define TXT_COVER_LANGUAGE "Language/Dialect"
#endif

#ifdef LANGUAGE_ES
const char sWeekday[][2] = {
    { ' ', ' ' }, // 00
    { 'D', 'O' }, // 01
    { 'L', 'U' }, // 02
    { 'M', 'A' }, // 03
    { 'M', 'I' }, // 04
    { 'J', 'U' }, // 05
    { 'V', 'I' }, // 06
    { 'S', 'A' }  // 07
};
#define LANGSTR "es"
#define TXT_SETTINGS "Settings"
#define TXT_ALARM "Alarm"
#define TXT_ON "on"
#define TXT_OFF "off"
#define TXT_HOURBEEP "Hourly beep"
#define TXT_TIMER "Timer"
#define TXT_MINUTES "minutes"
#define TXT_COLOR "Color"
#define TXT_COLORCHANGE "Color Change"
#define TXT_BRIGHTNESS "Brightness"
#define TXT_SHOW_TEMP "Show temperature"
#define TXT_AUTO_BRIGHTNESS "Auto brightness"
#define TXT_TRANSITION "Transition animation"
#define TXT_TIMEOUT "Back to clock timeout"
#define TXT_NIGHT_OFF "Switch off at"
#define TXT_DAY_ON "Switch on at"
#define TXT_PURIST_MODE "Purist Mode"
#define TXT_SHOW_GSI "Show \"GSI\""
#define TXT_SET_DATE_TIME "Set date/time"
#define TXT_ACTIVE "Active"
#define TXT_DATE "Date"
#define TXT_TEXT "Text"
#define TXT_ANIMATION "Animation"
#define TXT_REP_RATE "Repetition rate"
#define TXT_ADMIN "Admin"
#define TXT_TIME_SERVER "Time Server URL"
#define TXT_OW_API_KEY "OpenWeather API Key"
#define TXT_OW_LOCATION "OpenWeather Location"
#define TXT_COVER_LANGUAGE "Language/Dialect"
#endif

#ifdef LANGUAGE_NL
const char sWeekday[][2] = {
    { ' ', ' ' }, // 00
    { 'Z', 'O' }, // 01
    { 'M', 'A' }, // 02
    { 'D', 'I' }, // 03
    { 'W', 'O' }, // 04
    { 'D', 'O' }, // 05
    { 'V', 'R' }, // 06
    { 'Z', 'A' }  // 07
};
#define LANGSTR "nl"
#define TXT_SETTINGS "Settings"
#define TXT_ALARM "Alarm"
#define TXT_ON "on"
#define TXT_OFF "off"
#define TXT_HOURBEEP "Hourly beep"
#define TXT_TIMER "Timer"
#define TXT_MINUTES "minutes"
#define TXT_COLOR "Color"
#define TXT_COLORCHANGE "Color Change"
#define TXT_BRIGHTNESS "Brightness"
#define TXT_SHOW_TEMP "Show temperature"
#define TXT_AUTO_BRIGHTNESS "Auto brightness"
#define TXT_TRANSITION "Transition animation"
#define TXT_TIMEOUT "Back to clock timeout"
#define TXT_NIGHT_OFF "Switch off at"
#define TXT_DAY_ON "Switch on at"
#define TXT_PURIST_MODE "Purist Mode"
#define TXT_SHOW_GSI "Show \"GSI\""
#define TXT_SET_DATE_TIME "Set date/time"
#define TXT_ACTIVE "Active"
#define TXT_DATE "Date"
#define TXT_TEXT "Text"
#define TXT_ANIMATION "Animation"
#define TXT_REP_RATE "Repetition rate"
#define TXT_ADMIN "Admin"
#define TXT_TIME_SERVER "Time Server URL"
#define TXT_OW_API_KEY "OpenWeather API Key"
#define TXT_OW_LOCATION "OpenWeather Location"
#define TXT_COVER_LANGUAGE "Language/Dialect"
#endif

#endif
