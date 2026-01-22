#include "inputOutput.h"

#include "system/systemCalls.h"

long print(String string) {
    return writeString(standardOutput, string);
}

long writeString(FileDescriptor fileDescriptor, String string) {
    return write(fileDescriptor, string, stringLength(string));
}
