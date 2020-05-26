// Ch5.6.3trythis.cpp
//
//Re

#include "std_lib_facilities.h"

int main()
{
    error("uncaught exception error");
    // received the following error message after compiling
    // libc++abi.dylib: terminating with uncaught exception of type std::runtime_error: so this is what an uncaught error looks like
    // terminated and program ended with exit code: 9
}
