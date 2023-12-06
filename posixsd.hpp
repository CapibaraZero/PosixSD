#include "FS.h"

int init_sdcard(int pin);

File open(String path);

File open(String path, const char *mode);

bool rename(String oldpath, String newpath);

bool remove(String path);

bool mkdir(String path);

bool exists(String path);

FS get_current_fs();