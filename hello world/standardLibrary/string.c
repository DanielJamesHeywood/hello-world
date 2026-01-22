#include "string.h"

unsigned long stringLength(const char* string) {
    unsigned long length = 0;
    while (string[length] != '\0') {
        length += 1;
    }
    return length;
}
