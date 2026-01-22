#pragma once

#include "FileDescriptor.h"
#include "String.h"

long print(String string);

long writeString(FileDescriptor fileDescriptor, String string);
