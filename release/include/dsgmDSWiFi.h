// Patches to dswifi to use additional dsgmDSWifi functionality

#pragma once

enum WIRELESS_MODE {
	WIRELESS_MODE_WIFI,
	WIRELESS_MODE_NIFI,
};

extern enum WIRELESS_MODE wirelessMode;

static inline void setWirelessMode(enum WIRELESS_MODE mode) {
  if(mode == WIRELESS_MODE_WIFI || mode == WIRELESS_MODE_NIFI) wirelessMode = mode;
}
