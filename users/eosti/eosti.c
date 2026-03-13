#include "eosti.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TMUX_WN:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(TMUX_LEADER) "n");
            }
            break;

        case TMUX_WL:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(TMUX_LEADER) "l");
            }
            break;

        case TMUX_L:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(TMUX_LEADER) SS_TAP(X_LEFT));
            }
            break;

        case TMUX_R:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(TMUX_LEADER) SS_TAP(X_RIGHT));
            }
            break;

        case TMUX_D:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(TMUX_LEADER) SS_TAP(X_DOWN));
            }
            break;

        case TMUX_U:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(TMUX_LEADER) SS_TAP(X_UP));
            }
            break;
        case M801:
            if (record->event.pressed) {
                SEND_STRING("M801" SS_TAP(X_ENTER));
            }
            break;
        case M802:
            if (record->event.pressed) {
                SEND_STRING("M802" SS_TAP(X_ENTER));
            }
            break;
        case M803:
            if (record->event.pressed) {
                SEND_STRING("M803" SS_TAP(X_ENTER));
            }
            break;
        case M804:
            if (record->event.pressed) {
                SEND_STRING("M804" SS_TAP(X_ENTER));
            }
            break;
        case M805:
            if (record->event.pressed) {
                SEND_STRING("M805" SS_TAP(X_ENTER));
            }
            break;
        case M806:
            if (record->event.pressed) {
                SEND_STRING("M806" SS_TAP(X_ENTER));
            }
            break;
        case ALTIUM_PLACE_SELECTED:
            if (record->event.pressed) {
                SEND_STRING("toc");
            }
            break;

    }
    return true;
};

