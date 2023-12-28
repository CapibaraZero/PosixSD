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

int init_sdcard(int pin) {
    return SD.begin(pin);
}

File open(String path) {
    return SD.open(path);
}

File open(String path, const char *mode) {
    return SD.open(path, mode);
}

bool rename(String oldpath, String newpath) {
    return SD.rename(oldpath, newpath);
}

bool remove(String path) {
    return SD.remove(path);
}

bool rmdir(String path) {
    return SD.rmdir(path);
}

bool mkdir(String path) {
    return SD.mkdir(path);
}

bool exists(String path) {
    return SD.exists(path);
}

FS get_current_fs() {
    return SD;
}

