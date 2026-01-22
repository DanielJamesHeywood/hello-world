#include "String.h"

Length stringLength(String string) {
    Length length = 0;
    while (string[length] != '\0') {
        length += 1;
    }
    return length;
}
