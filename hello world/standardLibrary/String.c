#include "String.h"

unsigned long stringLength(String string) {
    unsigned long length = 0;
    while (string[length] != '\0') {
        length += 1;
    }
    return length;
}
