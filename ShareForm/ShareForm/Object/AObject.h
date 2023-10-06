#pragma once
#ifndef DECLARE_AOBJECT_H
#define DECLARE_AOBJECT_H
#include "ShareForm/Object/IObject.h"
#include "ShareForm/Define/ShareFormDefine_Namespace.h"
BEGINE_SPACE_SF_OBJECT
class AObject : public IObject
{
public:
	virtual const std::wstring GetName() const final;
	virtual void SetName(const std::wstring& name) final;
	virtual ~AObject() = 0;
private:
	std::wstring _name;
public:
	AObject() : _name(L"") {}
	AObject(std::wstring name) : _name(name) {}
};
END_SPACE
#endif // !DECLARE_AOBJECT_H
