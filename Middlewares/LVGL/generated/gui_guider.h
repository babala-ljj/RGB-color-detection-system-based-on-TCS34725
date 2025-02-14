/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{
  
	lv_obj_t *screen;
	bool screen_del;
	lv_obj_t *screen_spangroup_1;
	lv_obj_t *screen_line_1;
	lv_obj_t *screen_spangroup_2;
	lv_obj_t *screen_line_2;
	lv_obj_t *screen_bar_3;
	lv_obj_t *screen_line_3;
	lv_obj_t *screen_bar_4;
	lv_obj_t *screen_spangroup_3;
	lv_obj_t *screen_RGB_R_Value;
	lv_obj_t *screen_RGB_G_Value;
	lv_obj_t *screen_RGB_B_Value;
	lv_obj_t *screen_bar_2;
	lv_obj_t *screen_Clear_Value;
	lv_obj_t *screen_spangroup_4;
	lv_obj_t *screen_spangroup_5;
	lv_obj_t *screen_Gain_Value;
	lv_obj_t *screen_LED;
	lv_obj_t *screen_spangroup_6;
	lv_obj_t *screen_IR_Value;
}lv_ui;

void ui_init_style(lv_style_t * style);
void init_scr_del_flag(lv_ui *ui);
void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;

void setup_scr_screen(lv_ui *ui);

LV_FONT_DECLARE(lv_font_montserratMedium_10)
LV_FONT_DECLARE(lv_font_Acme_Regular_14)
LV_FONT_DECLARE(lv_font_montserratMedium_12)


#ifdef __cplusplus
}
#endif
#endif
