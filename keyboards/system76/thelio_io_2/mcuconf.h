/* Copyright 2023 System76
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include_next <mcuconf.h>

#define ADC_COUNT 4

// ADC0 is for power button sense
#undef RP_ADC_USE_ADC0
#define RP_ADC_USE_ADC0         TRUE

// ADC1 is for power button sense
#undef RP_ADC_USE_ADC1
#define RP_ADC_USE_ADC1         TRUE

// ADC2 is for power LED sense
#undef RP_ADC_USE_ADC2
#define RP_ADC_USE_ADC2         TRUE

// ADC3 is for power LED sense
#undef RP_ADC_USE_ADC3
#define RP_ADC_USE_ADC3         TRUE

// PWM0A used for PWM0, PWM0B used for PWM1
#undef RP_PWM_USE_PWM0
#define RP_PWM_USE_PWM0         TRUE

// PWM1A used for PWM2, PWM1B used for PWM3
#undef RP_PWM_USE_PWM1
#define RP_PWM_USE_PWM1         TRUE

// PWM2B used for TACH0
#undef RP_PWM_USE_PWM2
#define RP_PWM_USE_PWM2         TRUE

// PWM3B used for TACH1
#undef RP_PWM_USE_PWM3
#define RP_PWM_USE_PWM3         TRUE

// PWM4B used for TACH2
#undef RP_PWM_USE_PWM4
#define RP_PWM_USE_PWM4         TRUE

// PWM5B used for TACH3
#undef RP_PWM_USE_PWM5
#define RP_PWM_USE_PWM5         TRUE

// PWM6B used for PLED
#undef RP_PWM_USE_PWM6
#define RP_PWM_USE_PWM6         TRUE
