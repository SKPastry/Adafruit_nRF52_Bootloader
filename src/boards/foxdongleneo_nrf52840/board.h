/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2026 FoxApplication
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _FOXDONGLENEO
#define _FOXDONGLENEO

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
// The red die is part of the RGB LED, not a separate primary LED.
// Give it one PWM channel; do not also connect LED_PRIMARY to P0.13.
#define LEDS_NUMBER           0
#define LED_STATE_ON          1

#define LED_RGB_RED_PIN       PINNUM(0, 13)
#define LED_RGB_GREEN_PIN     PINNUM(0, 17)
#define LED_RGB_BLUE_PIN      PINNUM(0, 15)
#define BOARD_RGB_BRIGHTNESS  0x202020
#define LED_RGB_COMMON_CATHODE // RGB LED is common-cathode (driven high to light)

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER        2
#define BUTTON_DFU            PINNUM(0, 18)
#define BUTTON_DFU_OTA        PINNUM(1, 9) // functional button
#define BUTTON_PULL           NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER   "FoxApplication"
#define BLEDIS_MODEL          "FoxDongleNEO"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID           0x1209
#define USB_DESC_UF2_PID       0x7693
#define USB_DESC_CDC_ONLY_PID  0x7693

//------------- UF2 -------------//
#define UF2_PRODUCT_NAME   "FoxApplication FoxDongleNEO V1"
#define UF2_VOLUME_LABEL   "FOX-BOOT"
#define UF2_BOARD_ID       "FoxDongleNEO-v1"
#define UF2_INDEX_URL      "https://www.foxapplication.com/"

#endif // _FOXDONGLENEO
