// mist_cfg.h
// 2015, rok.krajnc@gmail.com


#ifndef __MIST_CFG_H__
#define __MIST_CFG_H__


//// includes ////
#include <inttypes.h>
#include "ini_parser.h"


//// type definitions ////
typedef struct {
  uint32_t keyrah_mode;
  uint8_t scandoubler_disable;
  uint8_t mouse_boot_mode;
  uint8_t joystick_ignore_hat;
  uint8_t joystick_ignore_osd;
  uint8_t joystick_disable_shortcuts;
  uint8_t joystick0_prefer_db9;
  uint8_t key_menu_as_rgui;
  uint8_t reset_combo;
  uint8_t ypbpr;
  uint8_t keep_video_mode;
  uint8_t led_animation;
} mist_cfg_t;


//// functions ////
void mist_ini_parse();


//// global variables ////
extern const ini_cfg_t mist_ini_cfg;
extern mist_cfg_t mist_cfg;


#endif // __MIST_CFG_H__

