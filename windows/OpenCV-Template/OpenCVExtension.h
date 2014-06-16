#include <FlashRuntimeExtensions.h>
#include <iostream>
#include <sstream>

#include <stdlib.h>
#include <stdio.h>
#include "OpenCVHandler.h"

#include "Debug.h"

extern "C"
{
    void contextInitializer(void* extData, const uint8_t* ctxType, FREContext ctx, uint32_t* numFunctions, const FRENamedFunction** functions);
    void contextFinalizer(FREContext ctx);

   __declspec(dllexport) void initializer(void** extData, FREContextInitializer* ctxInitializer, FREContextFinalizer* ctxFinalizer);
   __declspec(dllexport) void finalizer(void* extData);
    
   FREObject isSupported(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]);
}
