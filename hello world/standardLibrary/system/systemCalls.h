#pragma once

#include "Buffer.h"
#include "FileDescriptor.h"
#include "SignedSize.h"
#include "Size.h"

SignedSize write(FileDescriptor fileDescriptor, Buffer buffer, Size numberOfBytes);
