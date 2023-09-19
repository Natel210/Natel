#pragma once
#ifndef DECLARE_AOBJECT_H
#define DECLARE_AOBJECT_H
#include <string>
#include "../SharedHeader.h"
#include "IObject.h"
BEGIN_OBJECT_SPACE
class AObject : public IObject
{
public:
	const std::wstring& GetName() const final
	{
		return _name;
	}
public:
	AObject(const std::wstring& name) : _name(name) {}
	virtual ~AObject() = 0 {}
private:
	const std::wstring _name;
};
END_SPACE
#endif // !DECLARE_AOBJECT_H
