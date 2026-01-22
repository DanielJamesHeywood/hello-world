#include "system/exitStatuses.h"
#include "system/fileDescriptors.h"
#include "system/systemCalls.h"

int main(int argumentCount, const char* argumentVector[]) {
    write(standardOutput, "Hello, World!\n", 14);
    return success;
}
