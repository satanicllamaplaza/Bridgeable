#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl/lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

// Screens

enum ScreensEnum {
    _SCREEN_ID_FIRST = 1,
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_TARGET_FREQUENCY_MENU = 2,
    SCREEN_ID_WET_DRY_MENU = 3,
    SCREEN_ID_TRANSITION_CURVE_MENU = 4,
    SCREEN_ID_RESET_MENU = 5,
    _SCREEN_ID_LAST = 5
};

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *target_frequency_menu;
    lv_obj_t *wet_dry_menu;
    lv_obj_t *transition_curve_menu;
    lv_obj_t *reset_menu;
    lv_obj_t *core_container;
    lv_obj_t *menu_title;
    lv_obj_t *menu_pannel;
    lv_obj_t *main_menu_roller;
    lv_obj_t *input_meter;
    lv_obj_t *input_meter_indicators;
    lv_obj_t *input_peak_light;
    lv_obj_t *input_max_light;
    lv_obj_t *input_90_to_95_light;
    lv_obj_t *input_80_to_90_light;
    lv_obj_t *input_70_to_80_light;
    lv_obj_t *input_60_to_70_light;
    lv_obj_t *input_50_to_60_light;
    lv_obj_t *input_40_to_50_light;
    lv_obj_t *input_30_to_40_light;
    lv_obj_t *input_20_to_30_light;
    lv_obj_t *input_10_to_20_light;
    lv_obj_t *input_0_to_10_light;
    lv_obj_t *input_label;
    lv_obj_t *output_meter;
    lv_obj_t *output_meter_indicators;
    lv_obj_t *output_peak_light;
    lv_obj_t *output_max_light;
    lv_obj_t *output_90_to_95_light;
    lv_obj_t *output_80_to_90_light;
    lv_obj_t *output_70_to_80_light;
    lv_obj_t *output_60_to_70_light;
    lv_obj_t *output_50_to_60_light;
    lv_obj_t *output_40_to_50_light;
    lv_obj_t *output_30_to_40_light;
    lv_obj_t *output_20_to_30_light;
    lv_obj_t *output_10_to_20_light;
    lv_obj_t *output_0_to_10_light;
    lv_obj_t *input_label_1;
    lv_obj_t *core_container_1;
    lv_obj_t *target_frequency;
    lv_obj_t *output_meter_1;
    lv_obj_t *output_meter_indicators_1;
    lv_obj_t *output_peak_light_1;
    lv_obj_t *output_max_light_1;
    lv_obj_t *output_90_to_96;
    lv_obj_t *output_80_to_91;
    lv_obj_t *output_70_to_81;
    lv_obj_t *output_60_to_71;
    lv_obj_t *output_50_to_61;
    lv_obj_t *output_40_to_51;
    lv_obj_t *output_30_to_41;
    lv_obj_t *output_20_to_31;
    lv_obj_t *output_10_to_21;
    lv_obj_t *output_0_to_11;
    lv_obj_t *input_label_3;
    lv_obj_t *input_meter_1;
    lv_obj_t *input_meter_indicators_1;
    lv_obj_t *input_peak_light_1;
    lv_obj_t *input_max_light_1;
    lv_obj_t *input_90_to_96;
    lv_obj_t *input_80_to_91;
    lv_obj_t *input_70_to_81;
    lv_obj_t *input_60_to_71;
    lv_obj_t *input_50_to_61;
    lv_obj_t *input_40_to_51;
    lv_obj_t *input_30_to_41;
    lv_obj_t *input_20_to_31;
    lv_obj_t *input_10_to_21;
    lv_obj_t *input_0_to_11;
    lv_obj_t *input_label_2;
    lv_obj_t *menu_pannel_1;
    lv_obj_t *frequency_display_panel;
    lv_obj_t *hertz_info_label;
    lv_obj_t *frequency_label;
    lv_obj_t *nearest_note_info_text;
    lv_obj_t *nearest_note_label;
    lv_obj_t *base_frequency;
    lv_obj_t *peak_frequency_1;
    lv_obj_t *frequency_slider;
    lv_obj_t *core_container_2;
    lv_obj_t *menu_title_2;
    lv_obj_t *output_meter_2;
    lv_obj_t *output_meter_indicators_2;
    lv_obj_t *output_peak_light_2;
    lv_obj_t *output_max_light_2;
    lv_obj_t *output_90_to_97;
    lv_obj_t *output_80_to_92;
    lv_obj_t *output_70_to_82;
    lv_obj_t *output_60_to_72;
    lv_obj_t *output_50_to_62;
    lv_obj_t *output_40_to_52;
    lv_obj_t *output_30_to_42;
    lv_obj_t *output_20_to_32;
    lv_obj_t *output_10_to_22;
    lv_obj_t *output_0_to_12;
    lv_obj_t *input_label_4;
    lv_obj_t *input_meter_2;
    lv_obj_t *input_meter_indicators_2;
    lv_obj_t *input_peak_light_2;
    lv_obj_t *input_max_light_2;
    lv_obj_t *input_90_to_97;
    lv_obj_t *input_80_to_92;
    lv_obj_t *input_70_to_82;
    lv_obj_t *input_60_to_72;
    lv_obj_t *input_50_to_62;
    lv_obj_t *input_40_to_52;
    lv_obj_t *input_30_to_42;
    lv_obj_t *input_20_to_32;
    lv_obj_t *input_10_to_22;
    lv_obj_t *input_0_to_12;
    lv_obj_t *input_label_5;
    lv_obj_t *menu_pannel_2;
    lv_obj_t *frequency_display_panel_1;
    lv_obj_t *hertz_info_label_1;
    lv_obj_t *frequency_label_1;
    lv_obj_t *dry_label;
    lv_obj_t *wet_label;
    lv_obj_t *percentage_label;
    lv_obj_t *frequency_slider_1;
    lv_obj_t *core_container_3;
    lv_obj_t *transition_curve_label;
    lv_obj_t *output_meter_3;
    lv_obj_t *output_meter_indicators_3;
    lv_obj_t *output_peak_light_3;
    lv_obj_t *output_max_light_3;
    lv_obj_t *output_90_to_98;
    lv_obj_t *output_80_to_93;
    lv_obj_t *output_70_to_83;
    lv_obj_t *output_60_to_73;
    lv_obj_t *output_50_to_63;
    lv_obj_t *output_40_to_53;
    lv_obj_t *output_30_to_43;
    lv_obj_t *output_20_to_33;
    lv_obj_t *output_10_to_23;
    lv_obj_t *output_0_to_13;
    lv_obj_t *input_label_7;
    lv_obj_t *input_meter_3;
    lv_obj_t *input_meter_indicators_3;
    lv_obj_t *input_peak_light_3;
    lv_obj_t *input_max_light_3;
    lv_obj_t *input_90_to_98;
    lv_obj_t *input_80_to_93;
    lv_obj_t *input_70_to_83;
    lv_obj_t *input_60_to_73;
    lv_obj_t *input_50_to_63;
    lv_obj_t *input_40_to_53;
    lv_obj_t *input_30_to_43;
    lv_obj_t *input_20_to_33;
    lv_obj_t *input_10_to_23;
    lv_obj_t *input_0_to_13;
    lv_obj_t *input_label_6;
    lv_obj_t *menu_pannel_3;
    lv_obj_t *transition_curve_roller;
    lv_obj_t *soft_transition_curve_graphic_1;
    lv_obj_t *medium_transition_curve_graphic;
    lv_obj_t *hard_transition_curve_graphic;
    lv_obj_t *soft_graphic;
    lv_obj_t *medium_graphic;
    lv_obj_t *hard_graphic;
    lv_obj_t *core_container_4;
    lv_obj_t *reset_menu_label;
    lv_obj_t *output_meter_4;
    lv_obj_t *output_meter_indicators_4;
    lv_obj_t *output_peak_light_4;
    lv_obj_t *output_max_light_4;
    lv_obj_t *output_90_to_99;
    lv_obj_t *output_80_to_94;
    lv_obj_t *output_70_to_84;
    lv_obj_t *output_60_to_74;
    lv_obj_t *output_50_to_64;
    lv_obj_t *output_40_to_54;
    lv_obj_t *output_30_to_44;
    lv_obj_t *output_20_to_34;
    lv_obj_t *output_10_to_24;
    lv_obj_t *output_0_to_14;
    lv_obj_t *input_label_8;
    lv_obj_t *input_meter_4;
    lv_obj_t *input_meter_indicators_4;
    lv_obj_t *input_peak_light_4;
    lv_obj_t *input_max_light_4;
    lv_obj_t *input_90_to_99;
    lv_obj_t *input_80_to_94;
    lv_obj_t *input_70_to_84;
    lv_obj_t *input_60_to_74;
    lv_obj_t *input_50_to_64;
    lv_obj_t *input_40_to_54;
    lv_obj_t *input_30_to_44;
    lv_obj_t *input_20_to_34;
    lv_obj_t *input_10_to_24;
    lv_obj_t *input_0_to_14;
    lv_obj_t *input_label_9;
    lv_obj_t *menu_pannel_4;
    lv_obj_t *obj0;
    lv_obj_t *obj1;
} objects_t;

extern objects_t objects;

void create_screen_main();
void tick_screen_main();

void create_screen_target_frequency_menu();
void tick_screen_target_frequency_menu();

void create_screen_wet_dry_menu();
void tick_screen_wet_dry_menu();

void create_screen_transition_curve_menu();
void tick_screen_transition_curve_menu();

void create_screen_reset_menu();
void tick_screen_reset_menu();

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();

#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/