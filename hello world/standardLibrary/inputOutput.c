#include "inputOutput.h"

#include "system/fileDescriptors.h"
#include "system/systemCalls.h"

#include "string.h"

long print(const char* string) {
    return writeString(standardOutput, string);
}

long writeString(int fileDescriptor, const char* string) {
    return write(fileDescriptor, string, stringLength(string));
}
