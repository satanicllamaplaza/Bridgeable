#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl/lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

// Screens

enum ScreensEnum {
    _SCREEN_ID_FIRST = 1,
    SCREEN_ID_TUNER_MENU = 1,
    _SCREEN_ID_LAST = 1
};

typedef struct _objects_t {
    lv_obj_t *tuner_menu;
    lv_obj_t *core_container_5;
    lv_obj_t *tone_menu_label;
    lv_obj_t *output_meter_5;
    lv_obj_t *output_meter_indicators_5;
    lv_obj_t *output_peak_light_5;
    lv_obj_t *output_max_light_5;
    lv_obj_t *output_90_to_100;
    lv_obj_t *output_80_to_95;
    lv_obj_t *output_70_to_85;
    lv_obj_t *output_60_to_75;
    lv_obj_t *output_50_to_65;
    lv_obj_t *output_40_to_55;
    lv_obj_t *output_30_to_45;
    lv_obj_t *output_20_to_35;
    lv_obj_t *output_10_to_25;
    lv_obj_t *output_0_to_15;
    lv_obj_t *input_label_10;
    lv_obj_t *input_meter_5;
    lv_obj_t *input_meter_indicators_5;
    lv_obj_t *input_peak_light_5;
    lv_obj_t *input_max_light_5;
    lv_obj_t *input_90_to_100;
    lv_obj_t *input_80_to_95;
    lv_obj_t *input_70_to_85;
    lv_obj_t *input_60_to_75;
    lv_obj_t *input_50_to_65;
    lv_obj_t *input_40_to_55;
    lv_obj_t *input_30_to_45;
    lv_obj_t *input_20_to_35;
    lv_obj_t *input_10_to_25;
    lv_obj_t *input_0_to_15;
    lv_obj_t *input_label_11;
    lv_obj_t *menu_pannel_5;
    lv_obj_t *obj0;
    lv_obj_t *frequency_label_2;
} objects_t;

extern objects_t objects;

void create_screen_tuner_menu();
void tick_screen_tuner_menu();

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();

#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/