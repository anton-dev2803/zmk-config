#include <zephyr/init.h>
#include <lvgl.h>

/* Init-Hook nach LVGL-Setup: drehe das Default-Display um 90° */
static int rotate_disp_init(void)
{
    lv_disp_t *disp = lv_disp_get_default();
    if (!disp) {
        return 0;
    }

    /* LVGL 8.x API: 90° Hochformat */
    lv_disp_set_rotation(disp, LV_DISP_ROT_90);

    return 0;
}

/* APPLICATION-Phase, Prio 99, damit LVGL schon ready ist */
SYS_INIT(rotate_disp_init, APPLICATION, 99);