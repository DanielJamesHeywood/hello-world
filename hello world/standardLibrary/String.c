#include "String.h"

Length lengthOfString(String string) {
    Length length = 0;
    while (string[length] != '\0') {
        length += 1;
    }
    return length;
}
