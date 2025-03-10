#undef TAPPING_TERM
#define TAPPING_TERM 170

#define USB_SUSPEND_WAKEUP_DELAY 0
#define AUTO_SHIFT_TIMEOUT 170
#define NO_AUTO_SHIFT_ALPHA
#define CAPS_LOCK_STATUS
#define SERIAL_NUMBER "VRGMJ/MaaLaL"
#define LAYER_STATE_16BIT
#define COMBO_COUNT 5
#define HCS(report) host_consumer_send(record->event.pressed ? report : 0); return false

#define RGB_MATRIX_STARTUP_SPD 60

