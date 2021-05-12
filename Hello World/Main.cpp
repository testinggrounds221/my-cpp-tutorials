#include <iostream>

// #include "Log.h"

void Log(const char*);

int main()
{
	Log("Hey There");

	system("PAUSE");
}

void Log(const char* msg){
	std::cout << msg << "\n";
}
// For main function, the default return value is 0