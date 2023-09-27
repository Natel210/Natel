#pragma once
#ifndef DECLARE_AOBJECT_H
#define DECLARE_AOBJECT_H
#include "Base/String/LibString.h"
#include "Base/Form/Object/IObject.h"
namespace commonlib {
	class AObject : public IObject
	{
	public:
		virtual const TString GetName() const final
		{
			return _name;
		}
		virtual void SetName(const TString& name) final
		{
			_name = name;
		}
	public:
		virtual ~AObject() = default;
	private:
		TString _name;
	};
}
#endif // !DECLARE_AOBJECT_H
