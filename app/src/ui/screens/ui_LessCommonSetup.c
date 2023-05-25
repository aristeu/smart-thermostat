// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: Thermostat

#include "../ui.h"

void ui_LessCommonSetup_screen_init(void)
{
    ui_LessCommonSetup = lv_obj_create(NULL);
    lv_obj_add_state(ui_LessCommonSetup, LV_STATE_USER_1);       /// States
    lv_obj_clear_flag(ui_LessCommonSetup,
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM);    /// Flags
    lv_obj_set_scrollbar_mode(ui_LessCommonSetup, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ui_LessCommonSetup, lv_color_hex(0xB787E2), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_LessCommonSetup, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_LessCommonSetup, lv_color_hex(0xBE5757), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_LessCommonSetup, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TimezoneLabel1 = lv_label_create(ui_LessCommonSetup);
    lv_obj_set_width(ui_TimezoneLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TimezoneLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TimezoneLabel1, 7);
    lv_obj_set_y(ui_TimezoneLabel1, -58);
    lv_obj_set_align(ui_TimezoneLabel1, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_TimezoneLabel1, "Time Zone:");

    ui_TimezoneDropdown = lv_dropdown_create(ui_LessCommonSetup);
    lv_dropdown_set_options(ui_TimezoneDropdown,
                            "GMT +11\nGMT +10\nGMT +9\nGMT +8\nGMT +7\nGMT +6\nGMT +5\nGMT +4\nGMT +3\nGMT +2\nGMT +1\nGMT\nGMT -1\nGMT -2\nGMT -3\nGMT -4\nGMT -5\nGMT -6\nGMT -7\nGMT -8\nGMT -9\nGMT -10\nGMT -11\nGMT -12");
    lv_obj_set_width(ui_TimezoneDropdown, 104);
    lv_obj_set_height(ui_TimezoneDropdown, 32);
    lv_obj_set_x(ui_TimezoneDropdown, 133);
    lv_obj_set_y(ui_TimezoneDropdown, -58);
    lv_obj_set_align(ui_TimezoneDropdown, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_TimezoneDropdown, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_set_style_bg_color(ui_TimezoneDropdown, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TimezoneDropdown, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_TimezoneDropdown, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_UiSleepTextLabel = lv_label_create(ui_LessCommonSetup);
    lv_obj_set_width(ui_UiSleepTextLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_UiSleepTextLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_UiSleepTextLabel, 7);
    lv_obj_set_y(ui_UiSleepTextLabel, -15);
    lv_obj_set_align(ui_UiSleepTextLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_UiSleepTextLabel, "Display Sleep:");

    ui_UiSleepLabel = lv_label_create(ui_LessCommonSetup);
    lv_obj_set_width(ui_UiSleepLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_UiSleepLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_UiSleepLabel, 138);
    lv_obj_set_y(ui_UiSleepLabel, -15);
    lv_obj_set_align(ui_UiSleepLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_UiSleepLabel, "30 s");

    ui_UiSleepSlider = lv_slider_create(ui_LessCommonSetup);
    lv_slider_set_range(ui_UiSleepSlider, 10, 90);
    lv_slider_set_value(ui_UiSleepSlider, 30, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_UiSleepSlider) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_UiSleepSlider, 0,
                                                                                                  LV_ANIM_OFF);
    lv_obj_set_width(ui_UiSleepSlider, 127);
    lv_obj_set_height(ui_UiSleepSlider, 10);
    lv_obj_set_x(ui_UiSleepSlider, -9);
    lv_obj_set_y(ui_UiSleepSlider, -15);
    lv_obj_set_align(ui_UiSleepSlider, LV_ALIGN_RIGHT_MID);

    ui_DualStageHeatLabel = lv_label_create(ui_LessCommonSetup);
    lv_obj_set_width(ui_DualStageHeatLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_DualStageHeatLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_DualStageHeatLabel, 7);
    lv_obj_set_y(ui_DualStageHeatLabel, 31);
    lv_obj_set_align(ui_DualStageHeatLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_DualStageHeatLabel, "2 Stage Heat:");

    ui_Hvac2StageHeatCheckbox = lv_checkbox_create(ui_LessCommonSetup);
    lv_checkbox_set_text(ui_Hvac2StageHeatCheckbox, "");
    lv_obj_set_width(ui_Hvac2StageHeatCheckbox, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Hvac2StageHeatCheckbox, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Hvac2StageHeatCheckbox, 0);
    lv_obj_set_y(ui_Hvac2StageHeatCheckbox, 31);
    lv_obj_set_align(ui_Hvac2StageHeatCheckbox, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Hvac2StageHeatCheckbox, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags

    ui_DisableLabel1 = lv_label_create(ui_LessCommonSetup);
    lv_obj_set_width(ui_DisableLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_DisableLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_DisableLabel1, 7);
    lv_obj_set_y(ui_DisableLabel1, 63);
    lv_obj_set_align(ui_DisableLabel1, LV_ALIGN_LEFT_MID);
    lv_label_set_long_mode(ui_DisableLabel1, LV_LABEL_LONG_SCROLL);
    lv_label_set_text(ui_DisableLabel1, "Reverse Valve:");

    ui_RevValveCheckbox = lv_checkbox_create(ui_LessCommonSetup);
    lv_checkbox_set_text(ui_RevValveCheckbox, "");
    lv_obj_set_width(ui_RevValveCheckbox, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RevValveCheckbox, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_RevValveCheckbox, 0);
    lv_obj_set_y(ui_RevValveCheckbox, 63);
    lv_obj_set_align(ui_RevValveCheckbox, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_RevValveCheckbox, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags

    ui_DisableLabel2 = lv_label_create(ui_LessCommonSetup);
    lv_obj_set_width(ui_DisableLabel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_DisableLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_DisableLabel2, 7);
    lv_obj_set_y(ui_DisableLabel2, 95);
    lv_obj_set_align(ui_DisableLabel2, LV_ALIGN_LEFT_MID);
    lv_label_set_long_mode(ui_DisableLabel2, LV_LABEL_LONG_SCROLL);
    lv_label_set_text(ui_DisableLabel2, "Audible Beep:");

    ui_AudibleBeepCheckbox = lv_checkbox_create(ui_LessCommonSetup);
    lv_checkbox_set_text(ui_AudibleBeepCheckbox, "");
    lv_obj_set_width(ui_AudibleBeepCheckbox, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_AudibleBeepCheckbox, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_AudibleBeepCheckbox, 0);
    lv_obj_set_y(ui_AudibleBeepCheckbox, 95);
    lv_obj_set_align(ui_AudibleBeepCheckbox, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_AudibleBeepCheckbox, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags

    ui_SetupWifiBtn1 = lv_btn_create(ui_LessCommonSetup);
    lv_obj_set_width(ui_SetupWifiBtn1, 100);
    lv_obj_set_height(ui_SetupWifiBtn1, 36);
    lv_obj_set_x(ui_SetupWifiBtn1, -2);
    lv_obj_set_y(ui_SetupWifiBtn1, -45);
    lv_obj_set_align(ui_SetupWifiBtn1, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_SetupWifiBtn1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_SetupWifiBtn1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_SetupWifiBtn1, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SetupWifiBtn1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_SetupWifiBtn1, lv_color_hex(0x2620F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_SetupWifiBtn1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SetupWifiLabel1 = lv_label_create(ui_LessCommonSetup);
    lv_obj_set_width(ui_SetupWifiLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SetupWifiLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SetupWifiLabel1, -36);
    lv_obj_set_y(ui_SetupWifiLabel1, -56);
    lv_obj_set_align(ui_SetupWifiLabel1, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_SetupWifiLabel1, "Wifi");
    lv_obj_set_style_text_color(ui_SetupWifiLabel1, lv_color_hex(0xFFE300), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SetupWifiLabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SetupHomeBtn1 = lv_btn_create(ui_LessCommonSetup);
    lv_obj_set_width(ui_SetupHomeBtn1, 100);
    lv_obj_set_height(ui_SetupHomeBtn1, 36);
    lv_obj_set_x(ui_SetupHomeBtn1, -2);
    lv_obj_set_y(ui_SetupHomeBtn1, -3);
    lv_obj_set_align(ui_SetupHomeBtn1, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_SetupHomeBtn1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_SetupHomeBtn1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_SetupHomeBtn1, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SetupHomeBtn1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_SetupHomeBtn1, lv_color_hex(0x2620F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_SetupHomeBtn1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SetupHomeLabel1 = lv_label_create(ui_LessCommonSetup);
    lv_obj_set_width(ui_SetupHomeLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SetupHomeLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SetupHomeLabel1, -30);
    lv_obj_set_y(ui_SetupHomeLabel1, -14);
    lv_obj_set_align(ui_SetupHomeLabel1, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_SetupHomeLabel1, "Home");
    lv_obj_set_style_text_color(ui_SetupHomeLabel1, lv_color_hex(0xFFE300), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SetupHomeLabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_UiSleepSlider, ui_event_UiSleepSlider, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SetupWifiBtn1, ui_event_SetupWifiBtn1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SetupHomeBtn1, ui_event_SetupHomeBtn1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_LessCommonSetup, ui_event_LessCommonSetup, LV_EVENT_ALL, NULL);

}
