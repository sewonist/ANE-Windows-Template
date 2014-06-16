#include "OpenCVExtension.h"

extern "C"
{
	OpenCVHandler *openCVHandler;

	FREObject isSupported(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[])
	{
		FREObject result;
		uint32_t ret = 1;
		FRENewObjectFromBool(ret, &result);
		return result;
	}

    FRENamedFunction _functionMap[] = {
		{ (const uint8_t*) "isSupported", 0, isSupported }
    };

    void contextInitializer(void* extData, const uint8_t* ctxType, FREContext ctx, uint32_t* numFunctions, const FRENamedFunction** functions)
    {
        *numFunctions = sizeof( _functionMap ) / sizeof( FRENamedFunction );
        *functions = _functionMap;

		openCVHandler = new OpenCVHandler(ctx);
		FRESetContextNativeData(ctx, (void *)openCVHandler);
		openCVHandler->init();
	}

	void contextFinalizer(FREContext ctx)
    {
        openCVHandler->dispose();
		return;
	}

	void initializer(void** extData, FREContextInitializer* ctxInitializer, FREContextFinalizer* ctxFinalizer)
    {
		ANE::log("Initializer context");
		*ctxInitializer = &contextInitializer;
		*ctxFinalizer = &contextFinalizer;
	}

	void finalizer(void* extData)
    {
		ANE::log("Final context");

		return;
	}
}
