#include "AObject.h"
#ifndef DECLARE_AOBJECT_CPP
#define DECLARE_AOBJECT_CPP
BEGINE_SPACE_SF_OBJECT

const std::wstring AObject::GetName() const
{
	return _name;
}

void AObject::SetName(const std::wstring& name)
{
	_name = name;
}

END_SPACE
#endif // !DECLARE_AOBJECT_CPP