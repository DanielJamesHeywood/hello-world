#include "inputOutput.h"

#include "system/systemCalls.h"

#include "string.h"

long writeString(int fileDescriptor, const char* string) {
    return write(fileDescriptor, string, stringLength(string));
}
