#include "standardLibrary/system/exitStatuses.h"
#include "standardLibrary/system/fileDescriptors.h"

#include "standardLibrary/inputOutput.h"

int main(int argumentCount, const char* argumentVector[]) {
    writeString(standardOutput, "Hello, World!\n");
    return success;
}
