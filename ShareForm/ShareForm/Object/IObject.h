#pragma once
#ifndef DECLARE_IOBJECT_H
#define DECLARE_IOBJECT_H
#include <string>
#include "ShareForm/Define/ShareFormDefine_Namespace.h"
BEGINE_SPACE_SF_OBJECT
class IObject
{
public:
	virtual const std::wstring GetName() const = 0;
	virtual void SetName(const std::wstring& name) = 0;
};
END_SPACE
#endif // !DECLARE_IOBJECT_H
