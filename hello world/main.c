#include "system/exitStatuses.h"
#include "system/fileDescriptors.h"

#include "inputOutput.h"

int main(int argumentCount, const char* argumentVector[]) {
    writeString(standardOutput, "Hello, World!\n");
    return success;
}
