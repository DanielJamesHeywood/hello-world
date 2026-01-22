#include "standardLibrary/ExitStatus.h"
#include "standardLibrary/inputOutput.h"

ExitStatus main(int argumentCount, String argumentVector[]) {
    return print("Hello, World!\n") ? success : failure;
}
