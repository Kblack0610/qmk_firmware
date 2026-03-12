#pragma once

// Trackball is on the right half
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT

// Fast I2C — default for split is 100kHz, Pimoroni supports 400kHz
#define F_SCL 400000UL

// PIM447 tuning
#define PIMORONI_TRACKBALL_SCALE 5

// Correct trackball orientation (sensor is mounted rotated)
#define POINTING_DEVICE_ROTATION_270

// Extended mouse reports for finer resolution (-32767..32767 instead of -127..127)
#define MOUSE_EXTENDED_REPORT

// Mod-tap tuning — match ZMK's eager modifier behavior
#define TAPPING_TERM 175
#define PERMISSIVE_HOLD
