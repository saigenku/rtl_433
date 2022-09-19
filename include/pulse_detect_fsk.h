/** @file
    Pulse detect functions.

    FSK pulse detector

    Copyright (C) 2015 Tommy Vestermark

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.
*/

#ifndef INCLUDE_PULSE_DETECT_FSK_H_
#define INCLUDE_PULSE_DETECT_FSK_H_

#include <stdint.h>
#include "pulse_detect.h"

void pulse_detect_fsk_classic(pulse_detect_fsk_t *s, int16_t fm_n, pulse_data_t *fsk_pulses);
void pulse_detect_fsk_wrap_up(pulse_detect_fsk_t *s, pulse_data_t *fsk_pulses);
void pulse_detect_fsk_minmax(pulse_detect_fsk_t *s, int16_t fm_n, pulse_data_t *fsk_pulses);

#define    FSK_PULSE_DETECT_START 0
enum {
    FSK_PULSE_DETECT_OLD,
    FSK_PULSE_DETECT_NEW,
    FSK_PULSE_DETECT_AUTO,
    FSK_PULSE_DETECT_END,
};
#endif /* INCLUDE_PULSE_DETECT_FSK_H_ */
