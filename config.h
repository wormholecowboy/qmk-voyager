#undef TAPPING_TERM
#define TAPPING_TERM 185

#define COMBO_TERM 40

#define USB_SUSPEND_WAKEUP_DELAY 0
#define CAPS_LOCK_STATUS
#define SERIAL_NUMBER "VRGMJ/EeWMmQ"
#define LAYER_STATE_16BIT
#define COMBO_COUNT 3
#define HCS(report) host_consumer_send(record->event.pressed ? report : 0); return false

#define RGB_MATRIX_STARTUP_SPD 60

