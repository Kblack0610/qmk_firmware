#pragma once

// Keep USB/master on the left half while the trackball stays on the right.
#define MASTER_LEFT

// Trackball is on the right half
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT

// Reduce bursty split-pointer traffic on AVR without making motion feel sluggish.
#define POINTING_DEVICE_TASK_THROTTLE_MS 4

// Fast I2C — default for split is 100kHz, Pimoroni supports 400kHz
#define F_SCL 400000UL

// PIM447 tuning — scale 1 to disable quadratic driver scaling; linear scaling in keymap.c
#define PIMORONI_TRACKBALL_SCALE 3

// Correct trackball orientation (sensor is mounted rotated)
#define POINTING_DEVICE_ROTATION_90

// Extended mouse reports for finer resolution (-32767..32767 instead of -127..127)
#define MOUSE_EXTENDED_REPORT

// Mod-tap tuning — match ZMK's eager modifier behavior
#define TAPPING_TERM 175
#define PERMISSIVE_HOLD
