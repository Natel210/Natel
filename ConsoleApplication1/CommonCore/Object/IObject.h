#pragma once
#ifndef DECLARE_IOBJECT_H
#define DECLARE_IOBJECT_H
#include <string>
using namespace shared::Object
{
	class IObject 
	{
		virtual const std::wstring& GetName() const = 0;
	};
}
#endif // !DECLARE_IOBJECT_H