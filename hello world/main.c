#include "standardLibrary/system/ArgumentCount.h"
#include "standardLibrary/system/ExitStatus.h"
#include "standardLibrary/inputOutput.h"

ExitStatus main(ArgumentCount argumentCount, String argumentVector[]) {
    return print("Hello, World!\n") ? success : failure;
}
