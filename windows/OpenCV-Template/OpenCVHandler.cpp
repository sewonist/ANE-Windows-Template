#include <iostream>
#include "OpenCVHandler.h"

OpenCVHandler::OpenCVHandler(FREContext freContext)
{
	CDEBUG("contructor");
	this->freContext = freContext;
}

OpenCVHandler::~OpenCVHandler(void)
{
	dispose();
}

void OpenCVHandler::init()
{
	CDEBUG("init()");
}

void OpenCVHandler::dispose()
{
	CDEBUG("dispose()");
}

void OpenCVHandler::isSupport()
{
	// 
}

void OpenCVHandler::CDEBUG(const char *str){
     FREDispatchStatusEventAsync(freContext, (const uint8_t *) "log", (const uint8_t *)str);
}

