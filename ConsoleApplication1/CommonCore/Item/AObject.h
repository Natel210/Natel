#pragma once
#ifndef DECLARE_AOBJECT_H
#define DECLARE_AOBJECT_H
////////////////////////////////////////////////////////////////////////////////
// dll ???? import exprot
#ifndef DECLARE_COMMONDLL
#define DECLARE_COMMONDLL
#ifdef _CommonCore
#define CommonDLL __declspec(dllexport)
#else
#define CommonDLL __declspec(dllImport)
#endif // _CommonCore
#endif // !DECLARE_COMMONDLL
////////////////////////////////////////////////////////////////////////////////
// ??? ??? ¡À??
#include <string>
////////////////////////////////////////////////////////////////////////////////
// ???? ??? ¡À??
#include "interface/IObject.h"
////////////////////////////////////////////////////////////////////////////////
// ????
namespace CommonCore {
	class CommonDLL AObject : public Interface::IObject
	{
	public:
		const std::wstring& GetName() const final
		{
			return _name;
		}
	public:
		AObject(const std::wstring& name) : _name(name) {

		}
		virtual ~AObject() = 0 {}
	private:
		const std::wstring _name;
	};
}
////////////////////////////////////////////////////////////////////////////////
#endif // !DECLARE_AOBJECT_H
