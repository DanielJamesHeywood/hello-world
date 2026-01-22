#include "inputOutput.h"

#include "system/fileDescriptors.h"
#include "system/systemCalls.h"

bool print(String string) {
    Length length = lengthOfString(string);
    return write(standardOutput, string, length) == length;
}
