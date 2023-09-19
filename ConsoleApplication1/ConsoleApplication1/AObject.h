#ifndef DECLARE_AOBJECT
#define DECLARE_AOBJECT

#ifndef INCLDUE_STRING
#define INCLDUE_STRING
#include <string>
#endif // !INCLDUE_STRING

#ifndef INCLUDE_IOBJECT
#define INCLUDE_IOBJECT
#include "IObject.h"
#endif // !INCLUDE_IOBJECT

class AObject : public IObject
{
public:
	const std::wstring& GetName() const final
	{
		return _name;
	}
public:
	AObject(const std::wstring& name) : _name(name)	{}
	virtual ~AObject() = 0 {}
private:
	const std::wstring _name;
};

#endif // !DECLARE_AOBJECT

