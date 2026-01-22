#include "inputOutput.h"

#include "system/fileDescriptors.h"
#include "system/systemCalls.h"

bool print(String string) {
    Length length = stringLength(string);
    return write(standardOutput, string, length) == length;
}
