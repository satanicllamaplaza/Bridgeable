#ifndef EEZ_LVGL_UI_VARS_H
#define EEZ_LVGL_UI_VARS_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// enum declarations

// Flow global variables

enum FlowGlobalVariables {
    FLOW_GLOBAL_VARIABLE_INPUT_VOLUME = 0,
    FLOW_GLOBAL_VARIABLE_OUTPUT_VOLUME = 1,
    FLOW_GLOBAL_VARIABLE_DETECTED_TONE = 2
};

// Native global variables

extern float get_var_input_volume();
extern void set_var_input_volume(float value);
extern float get_var_output_volume();
extern void set_var_output_volume(float value);
extern int32_t get_var_detected_tone();
extern void set_var_detected_tone(int32_t value);

#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_VARS_H*/