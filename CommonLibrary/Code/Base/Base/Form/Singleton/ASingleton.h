#pragma once
#ifndef DECLARE_ASINGLETON_H
#define DECLARE_ASINGLETON_H
////////////////////////////////////////////////////////////////////////////////
#include "Base/Define/LibDefine.h"
#include "Base/String/LibString.h"
#include "Base/Form/Object/AObject.h"
////////////////////////////////////////////////////////////////////////////////
namespace commonlib {
	/// <summary>
	/// <para>template Singleton.</para>
	/// </summary>
	/// <typeparam name="_This_Class">inheritance class</typeparam>
	template<typename _This_Class>
	class ASingleton : public AObject
	{
	public:
		static _This_Class& Get()
		{
			static _This_Class instance;
			return instance;
		}
	protected:
		ASingleton() = default;
		virtual ~ASingleton() = default;
		ASingleton(ASingleton& other) = delete;
		//ASingleton(const ASingleton& other) = delete;
		ASingleton& operator=(ASingleton& other) = delete;
		//ASingleton& operator=(const ASingleton& other) = delete;
	};
}
#endif // !DECLARE_ASINGLETON_H