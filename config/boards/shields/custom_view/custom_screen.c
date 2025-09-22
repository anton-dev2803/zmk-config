#include <zmk/display/status_screen.h>
#include <lvgl.h>



lv_obj_t *zmk_display_status_screen(void) {
    lv_obj_t *scr = lv_obj_create(NULL);
    lv_obj_t *lbl = lv_label_create(scr);
    lv_label_set_text(lbl, "Hello custom_view!");
    lv_obj_center(lbl);
    return scr;
}