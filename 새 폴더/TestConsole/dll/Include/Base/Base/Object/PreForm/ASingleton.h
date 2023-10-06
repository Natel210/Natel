#pragma once
#ifndef DECLARE_ASINGLETON_H
#define DECLARE_ASINGLETON_H
////////////////////////////////////////////////////////////////////////////////
#include "Base/Define/CommonLibraryBaseDefine.h"
#include "Base/String/CommonLibraryBaseString.h"
////////////////////////////////////////////////////////////////////////////////
namespace common_library {
	namespace base {
		/// <summary>
		/// <para>template Singleton.</para>
		/// </summary>
		/// <typeparam name="_This_Class">inheritance class</typeparam>
		template<class _This_Class>
		class CommonDLL ASingleton
		{
		public:
			static _This_Class& GetSingle()
			{
				static _This_Class instance;
				return instance;
			}
		public:
			virtual ~ASingleton() = default;
		protected:
			ASingleton() {}
			ASingleton(ASingleton& other) = delete;
			//ASingleton(const ASingleton& other) = delete;
			ASingleton& operator=(ASingleton& other) = delete;
			//ASingleton& operator=(const ASingleton& other) = delete;
		};
	}
}
#endif // !DECLARE_ASINGLETON_H