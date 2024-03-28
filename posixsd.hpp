/*
 * This file is part of the Capibara zero (https://github.com/CapibaraZero/fw or https://capibarazero.github.io/).
 * Copyright (c) 2023 Andrea Canale.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
 
#include "FS.h"
#include "SD.h"

int init_sdcard(int pin);
int init_sdcard_custom_spi(int pin, SPIClass &custom_spi);

File open(String path);

File open(String path, const char *mode);

bool rename(String oldpath, String newpath);

bool remove(String path);

bool mkdir(String path);

bool exists(String path);

FS get_current_fs();