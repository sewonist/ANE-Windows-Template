#include "Debug.h"

namespace ANE {
	using namespace std;
	void log(string msg) {
		string s = "ANE >> ";
		s += msg;
		wstring stemp = wstring(s.begin(), s.end());
		LPCWSTR sw = stemp.c_str();
		OutputDebugString(sw);
	}
}