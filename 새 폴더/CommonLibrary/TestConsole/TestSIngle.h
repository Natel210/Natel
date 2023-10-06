#pragma once
#include <iostream>
#include "Base/String/LibString.h"
#include "Base/Form/Singleton/ASingleton.h"

class TestSIngle : public commonlib::ASingleton<TestSIngle>
{
public:
	void OutConsole()
	{
		TCout << _TChar("OUT CONSOLE") << std::endl;
	}
};

//class TestSIngle2 : public common_library::base::ASingleton<TestSIngle>
//{
//	int a = 0;
//};