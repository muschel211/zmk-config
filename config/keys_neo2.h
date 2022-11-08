/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>



// Row 1
#define NE_CIRC GRAVE  // ^ (dead)
#define NE_1    N1    // 1
#define NE_2    N2    // 2
#define NE_3    N3    // 3
#define NE_4    N4    // 4
#define NE_5    N5    // 5
#define NE_6    N6    // 6
#define NE_7    N7    // 7
#define NE_8    N8    // 8
#define NE_9    N9    // 9
#define NE_0    N0    // 0
#define NE_MINS MINUS // -
#define NE_GRV  EQUAL  // ` (dead)
// Row 2
#define NE_X    Q    // X
#define NE_V    W    // V
#define NE_L    E    // L
#define NE_C    R    // C
#define NE_W    T    // W
#define NE_K    Y    // K
#define NE_H    H    // H
#define NE_G    I    // G
#define NE_F    O    // F
#define NE_Q    P    // Q
#define NE_SS   LBKT // ÃŸ
#define NE_ACUT RBKT // Â´ (dead)
// Row 3
#define NE_U    A    // U
#define NE_I    S    // I
#define NE_A    D    // A
#define NE_E    F    // E
#define NE_O    G    // O
#define NE_S    H    // S
#define NE_N    J    // N
#define NE_R    K    // R
#define NE_T    L    // T
#define NE_D    SEMI // D
#define NE_Y    SQT // Y
// Row 4
#define NE_UDIA Z    // Ãœ
#define NE_ODIA X    // Ã–
#define NE_ADIA C    // Ã„
#define NE_P    V    // P
#define NE_Z    B    // Z
#define NE_B    N    // B
#define NE_M    M    // M
#define NE_COMMA COMMA // ,
#define NE_DOT  DOT  // .
#define NE_J    FSLH // J


// NEO2_3 special characters
#define NEO2_SUPERSCRIPT_1        NO                       // ¹
#define NEO2_SUPERSCRIPT_2        NO                       // ²
#define NEO2_SUPERSCRIPT_3        NO                       // ³
#define NEO2_RSAQUO               LA(LS(N4))            // ›
#define NEO2_LSAQUO               LA(LS(N3))            // ‹
#define NEO2_CENT                 LA(N4)                  // ¢
#define NEO2_YEN                  LA(Y)                  // ¥
#define NEO2_SBQUO                LA(LS(N0))            // ‚
#define NEO2_LEFT_SINGLE_SQT    LA(RBKT)           // ‘
#define NEO2_RIGHT_SINGLE_SQT   LA(LS(RBKT))     // ’
#define NEO2_ELLIPSIS             LA(SEMI)             // …
#define NEO2_UNDERSCORE           LS(MINUS)              // _
#define NEO2_LBKT             LBKT                 // [
#define NEO2_RBKT             RBKT                 // ]
#define NEO2_CIRCUMFLEX           LS(N6)                  // ^
#define NEO2_EXCLAMATION          LS(N1)                  // !
#define NEO2_LESSTHAN             LS(COMMA)              // <
#define NEO2_GREATERTHAN          LS(DOT)                // >
#define NEO2_EQUAL                EQUAL                    // =
#define NEO2_AMPERSAND            LS(N7)                  // &
#define NEO2_SMALL_LONG_S         NO                       // ?
#define NEO2_BSLH               BSLH
#define NEO2_FSLH                FSLH                    // /
#define NEO2_CLBKT            LS(LBKT)           // {
#define NEO2_CRBKT            LS(RBKT)           // }
#define NEO2_ASTERISK             LS(N8)                  // *
#define NEO2_QUESTIONMARK         LS(FSLH)              // ?
#define NEO2_LPARENTHESES         LS(N9)                  // (
#define NEO2_RPARENTHESES         LS(N0)                  // )
#define NEO2_HYPHEN_MINUS         MINUS                    // -
#define NEO2_COLON                LS(SEMI)             // :
#define NEO2_AT                   LS(N2)                  // @
#define NEO2_HASH                 LS(N3)                  // #
#define NEO2_PIPE                 LS(BSLH)             // |
#define NEO2_TILDE                LS(GRAVE)              // ~
#define NEO2_BACKTICK             GRAVE                    // `
#define NEO2_PLUS                 LS(EQUAL)              // +
#define NEO2_PERCENT              LS(N5)                  // %
#define NEO2_DOUBLE_SQT         LS(SQT)              // "
#define NEO2_SINGLE_SQT         SQT                    // '
#define NEO2_SEMICOLON            SEMI                   // ;

// NEO2_4 special characters
#define NEO2_FEMININE_ORDINAL     LA(N9)                  // ª
#define NEO2_MASCULINE_ORDINAL    LA(N0)                  // º
#define NEO2_NUMERO_SIGN          NO                       // ?
#define NEO2_MIDDLE_DOT           LA(LS(N9))            // ·
#define NEO2_BRITISH_POUND        LA(N3)                  // £
#define NEO2_CURRENCY_SIGN        NO                       // ¤
#define NEO2_INV_EXCLAMATION      LA(N1)                  // ¡
#define NEO2_INV_QUESTIONMARK     LA(LS(FSLH))        // ¿
#define NEO2_DOLLAR               LS(N5)                  // $
#define NEO2_EM_DASH              LA(LS(MINUS))        // —
