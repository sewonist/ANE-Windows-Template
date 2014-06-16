#ifndef OpenCVExtension_OpenCVHandler_h
#define OpenCVExtension_OpenCVHandler_h

#define BOOST_ALL_NO_LIB
#define BOOST_THREAD_USE_LIB

#include <FlashRuntimeExtensions.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <Windows.h>
#include <sstream>

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


using namespace std;

class OpenCVHandler
{
public:
	OpenCVHandler(FREContext freContext);
	~OpenCVHandler(void);

	void init();
	void dispose();
	void isSupport();
	void CDEBUG(const char *str);

private:
	FREContext freContext;
};


#endif
