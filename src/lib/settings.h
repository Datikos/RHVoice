/* Copyright (C) 2011  Olga Yakovleva <yakovleva.o.v@gmail.com> */

/* This program is free software: you can redistribute it and/or modify */
/* it under the terms of the GNU General Public License as published by */
/* the Free Software Foundation, either version 3 of the License, or */
/* (at your option) any later version. */

/* This program is distributed in the hope that it will be useful, */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the */
/* GNU General Public License for more details. */

/* You should have received a copy of the GNU General Public License */
/* along with this program.  If not, see <http://www.gnu.org/licenses/>. */

#ifndef SETTINGS_H
#define SETTINGS_H
#include <unitypes.h>

float check_pitch_range(float value);
float check_rate_range(float value);
float check_volume_range(float value);

uint32_t *copy_punctuation_list();

extern ucs4_t stress_marker;

extern float min_sonic_rate;

extern int apply_high_pass_filter;

extern int use_libsonic_for_pitch;
extern int libsonic_hq;
extern float cap_pitch_factor;

void load_settings(const char *path);
void free_settings();

#endif
