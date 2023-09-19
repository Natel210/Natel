#ifdef Core
#ifndef DECLARE_IOBJECT_H
#define DECLARE_IOBJECT_H
////////////////////////////////////////////////////////////////////////////////
// include 
#ifndef INCLDUE_STRING
#define INCLDUE_STRING
#include <string>
#endif // !INCLDUE_STRING

////////////////////////////////////////////////////////////////////////////////
#endif // !DECLARE_IOBJECT_H
#else
#pragma once
#include <string>
#endif
namespace Core::Object
{
	class IObject
	{
		virtual const std::wstring& GetName() const = 0;
	};
}
#ifdef Core
#ifndef DECLARE_IOBJECT_H
#define DECLARE_IOBJECT_H
#endif // !DECLARE_IOBJECT_H
#endif