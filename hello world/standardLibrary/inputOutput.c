#include "inputOutput.h"

#include "system/systemCalls.h"

long writeString(int fileDescriptor, const char* string) {
    unsigned long numberOfBytes = 0;
    while (string[numberOfBytes] != '\0') {
        numberOfBytes += 1;
    }
    return write(fileDescriptor, string, numberOfBytes);
}
