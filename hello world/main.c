#include "fileDescriptors.h"
#include "systemCalls.h"

int main(int argumentCount, const char* argumentVector[]) {
    write(standardOutput, "Hello, World!\n", 14);
    return 0;
}
