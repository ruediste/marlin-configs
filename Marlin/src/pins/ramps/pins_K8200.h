/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * K8200 Arduino Mega with RAMPS v1.3 pin assignments
 * Identical to 3DRAG
 */

#define BOARD_INFO_NAME         "Velleman K8200"
#define DEFAULT_MACHINE_NAME    "K8200"
#define DEFAULT_SOURCE_CODE_URL "github.com/CONSULitAS/Marlin-K8200"

#define SPINDLE_LASER_PWM_PIN             8  // Hardware PWM
#define SPINDLE_LASER_ENA_PIN             -1  // Pullup!
#define SPINDLE_DIR_PIN                   -1
#define FAN_PIN -1

#define Z_DIR_PIN 48
#define Z_ENABLE_PIN 63
#define Z_STEP_PIN 46

#include "pins_3DRAG.h" // ... RAMPS

#undef X_MIN_PIN
#define X_MIN_PIN                          2

#undef X_MAX_PIN
#define X_MAX_PIN                          3

#undef SD_DETECT_PIN