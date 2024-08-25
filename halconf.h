// I2C Conf yanked from the 2040/ folder in the orignal KLOR repo, seems to be necessary.

#pragma once

#define HAL_USE_I2C TRUE
#define HAL_USE_PWM TRUE
#define HAL_USE_PAL TRUE

#include_next <halconf.h>
