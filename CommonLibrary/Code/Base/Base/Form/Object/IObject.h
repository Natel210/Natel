#pragma once
#ifndef DECLARE_IOBJECT_H
#define DECLARE_IOBJECT_H
#include "Base/String/LibString.h"
namespace common {
	class IObject
	{
	public:
		virtual const TString GetName() const = 0;
		virtual void SetName(const TString& name) = 0;
	};
}
#endif // !DECLARE_IOBJECT_H
