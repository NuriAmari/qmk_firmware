/* Copyright 2021 Jay Greco
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

#include QMK_KEYBOARD_H

enum custom_keycodes {
    README = SAFE_RANGE,
    HAPPY_BIRTHDAY_MESSAGE
};

char* BIRTHDAY_MESSAGE = "Happy Birthday Kallen :)";

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case HAPPY_BIRTHDAY_MESSAGE:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("|           , , , , , ,\n|           |_|_|_|_|_|\n|          |~=,=,=,=,=~|      Happy\n|          |~~~~~~~~~~~|       Birthday\n|        |~=,=,=,=,=,=,=~|      Kallen!\n|        |~~~~~~~~~~~~~~~|\n|      |~=,=,=,=,=,=,=,=,=~|\n|      |~~~~~~~~~~~~~~~~~~~|\n|    (^^^^^^^^^^^^^^^^^^^^^^^)\n|     `'-------------------'`\n\nhi\n\nwowowow look at you, 23 years old already ! i hope\nyou had a wonderful birthday. i'm v glad you had the\ncourage to befriend jack and i way back when in the\ndoucet days -- i'm sure we didn't make it easy -- looking\nback at those days always makes me laugh. ty for being\nsuch a wonderful friend -- indulging my spam and general\nweirdness. though it often falls on deaf ears, you give the\nbest advice and seem as it may, i appreciate it. i'm proud\nof you and really do look up to you in all aspects of life.\n\ni'm excited to see how life unfolds, I hope you are feeling\nat home in Seattle -- that your new friends are good to you\n-- that your crazy coffee chats are fruitful -- that you\nnever take a plane ever again but get to see all the big rocks in the\nworld anyways -- that you watch some, but not too much trash tv\n-- that you get that irredescent tesla and house with 2147483647\nrooms -- that that cinder web client hater be fired -- that\nthe spiders and slugs leave you be -- that leaf review your\ncls at speed -- that you find plenty a lesbian comic on yt\n-- that you get to badge in at all the G offices -- that you\nget that dog someday -- and that you be happy and healthy for\nthe rest of days.\n\nyou converted me from emoji skeptic to frequent user and\nso I thought you'd find this fun if not mildly useful. when\nyou are ready, hit the key immediately to the right of this\none.\n");
            return false;
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case README:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
        } else {
            SEND_STRING("README:\n\nhi\n\nif you are kallen, hi\nif you are not -- kindly avert thine eyes\n\nthis thing is an emoji macro pad -- every key\nexcept for the top two is programmed to emit\na unicode emoji -- but don't try it just yet.\nI have chosen some defaults I think you might use,\nbut you can can change them as well\n-- more on that later. the little metal\nwheel is volume, left for down, right for\nup and push it down to toggle mute.\n\nINITIAL SETUP:\n\nsorry but you need one setting for the emoji\nto work. On a Mac, which is the only thing\nI've tested on / assume you'll use, go to\nSystem Preferences > Keyboard > Input Sources\nand add Unicode Hex Input. You need this input\nsource selected for the emoji to work, I haven't\nhad any issues but you can switch back and\nforth anytime.\n\nUSAGE:\n\njust hit the buttons lol, the currently loaded\nmapping is:\n\n| | | |\n-------\n| EMOJI_1 | EMOJI_2 | EMOJI_3 | EMOJI_4 |\n| EMOJI_5 | EMOJI_6 | EMOJI_7 | EMOJI_8 |\n| EMOJI_9 | EMOJI_10 | EMOJI_11 | EMOJI_12 |\n| EMOJI_13 | EMOJI_14 | EMOJI_15 | EMOJI_16 |\n\nCUSTOMIZE:\n\ntodo\n");
            return false;
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;
};

#ifndef EMOJI_1_HEX
#define EMOJI_1_HEX 0x1F495 
#endif

#ifndef EMOJI_2_HEX
#define EMOJI_2_HEX 0x1F606
#endif

#ifndef EMOJI_3_HEX
#define EMOJI_3_HEX 0x1F62A
#endif

#ifndef EMOJI_4_HEX
#define EMOJI_4_HEX 0x1F97A 
#endif

#ifndef EMOJI_5_HEX
#define EMOJI_5_HEX 0x1f421 
#endif

#ifndef EMOJI_6_HEX
#define EMOJI_6_HEX 0x1f621 
#endif

#ifndef EMOJI_7_HEX
#define EMOJI_7_HEX 0x1f62e 
#endif

#ifndef EMOJI_8_HEX
#define EMOJI_8_HEX 0x1f622 
#endif

#ifndef EMOJI_9_HEX
#define EMOJI_9_HEX 0x1f480 
#endif

#ifndef EMOJI_10_HEX
#define EMOJI_10_HEX 0x1f31e 
#endif

#ifndef EMOJI_11_HEX
#define EMOJI_11_HEX 0x1f62d 
#endif

#ifndef EMOJI_12_HEX
#define EMOJI_12_HEX 0x2b55 
#endif

#ifndef EMOJI_13_HEX
#define EMOJI_13_HEX 0x1f440 
#endif

#ifndef EMOJI_14_HEX
#define EMOJI_14_HEX 0x1f620 
#endif

#ifndef EMOJI_15_HEX
#define EMOJI_15_HEX 0x1f9d0 
#endif

#ifndef EMOJI_16_HEX
#define EMOJI_16_HEX 0x1f643 
#endif

enum layers {
    _BASE = 0,
    _FUNC
};

enum unicode_name {
    EMOJI_1,
    EMOJI_2,
    EMOJI_3,
    EMOJI_4,
    EMOJI_5,
    EMOJI_6,
    EMOJI_7,
    EMOJI_8,
    EMOJI_9,
    EMOJI_10,
    EMOJI_11,
    EMOJI_12,
    EMOJI_13,
    EMOJI_14,
    EMOJI_15,
    EMOJI_16,
};

const uint32_t PROGMEM unicode_map[] = {
  [EMOJI_1] = EMOJI_1_HEX,
  [EMOJI_2] = EMOJI_2_HEX,
  [EMOJI_3] = EMOJI_3_HEX,
  [EMOJI_4] = EMOJI_4_HEX,
  [EMOJI_5] = EMOJI_5_HEX,
  [EMOJI_6] = EMOJI_6_HEX,
  [EMOJI_7] = EMOJI_7_HEX,
  [EMOJI_8] = EMOJI_8_HEX,
  [EMOJI_9] = EMOJI_9_HEX,
  [EMOJI_10] = EMOJI_10_HEX,
  [EMOJI_11] = EMOJI_11_HEX,
  [EMOJI_12] = EMOJI_12_HEX,
  [EMOJI_13] = EMOJI_13_HEX,
  [EMOJI_14] = EMOJI_14_HEX,
  [EMOJI_15] = EMOJI_15_HEX,
  [EMOJI_16] = EMOJI_16_HEX
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
                            KC_MUTE, HAPPY_BIRTHDAY_MESSAGE, README, 
    KC_VOLU, KC_VOLD, X(EMOJI_1), X(EMOJI_2), X(EMOJI_3), X(EMOJI_4), 
    KC_MPRV, KC_MNXT, X(EMOJI_5), X(EMOJI_6), X(EMOJI_7), X(EMOJI_8), 
    KC_LEFT, KC_RGHT, X(EMOJI_9), X(EMOJI_10), X(EMOJI_11), X(EMOJI_12), 
    KC_TRNS, KC_TRNS, X(EMOJI_13), X(EMOJI_14),   X(EMOJI_15), X(EMOJI_16)  
    ),

    [_FUNC] = LAYOUT(
                    ___, ___, ___, 
    ___, ___, ___, ___, ___, ___, 
    ___, ___, ___, ___, ___, ___, 
    ___, ___, ___, ___, ___, ___, 
    ___, ___, ___, ___, ___, ___  
    ),
};
