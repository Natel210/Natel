#pragma once
#ifndef DECLARE_OBJECTMANAGER
#define DECLARE_OBJECTMANAGER
#include <memory>
#include "Base/Form/Singleton/ASingleton.h"
namespace common {
	class ObjectManager : public ASingleton<ObjectManager>
	{
	public:
		bool AddObject();
		std::weak_ptr<class AObject> GetObject();
		bool DelObject();
	private:

	};
}
#endif // !DECLARE_OBJECTMANAGER

