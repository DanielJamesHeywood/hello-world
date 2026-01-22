#include "fileDescriptors.h"
#include "systemCalls.h"

int main(int argc, const char * argv[]) {
    write(standardOutput, "Hello, World!\n", 14);
    return 0;
}
