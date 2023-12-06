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

