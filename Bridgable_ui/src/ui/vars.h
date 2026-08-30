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
    FLOW_GLOBAL_VARIABLE_TARGET_FREQUENCY = 2,
    FLOW_GLOBAL_VARIABLE_WET_DRY_PERCENTAGE = 3,
    FLOW_GLOBAL_VARIABLE_TRANSITION_CURVE_INDEX = 4
};

// Native global variables

extern float get_var_input_volume();
extern void set_var_input_volume(float value);
extern float get_var_output_volume();
extern void set_var_output_volume(float value);
extern int32_t get_var_target_frequency();
extern void set_var_target_frequency(int32_t value);
extern float get_var_wet_dry_percentage();
extern void set_var_wet_dry_percentage(float value);
extern int32_t get_var_transition_curve_index();
extern void set_var_transition_curve_index(int32_t value);

#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_VARS_H*/