#pragma once
#ifndef DECLARE_ASINGLETON_H
#define DECLARE_ASINGLETON_H
////////////////////////////////////////////////////////////////////////////////
// dll 전용 import exprot
#ifndef DECLARE_COMMONDLL
#define DECLARE_COMMONDLL
#ifdef _CommonCore
#define CommonDLL __declspec(dllexport)
#else
#define CommonDLL __declspec(dllImport)
#endif // _CommonCore
#endif // !DECLARE_COMMONDLL
////////////////////////////////////////////////////////////////////////////////
// 외부 코드 첨부
#include <string>
////////////////////////////////////////////////////////////////////////////////
// 내부 코드 첨부
#include "AObject.h"
////////////////////////////////////////////////////////////////////////////////
// 내용
namespace CommonCore {
	/// <summary>
	/// <para>상속을 통해 싱글톤을 구현해 줍니다.</para>
	/// </summary>
	/// <typeparam name="_This_Class">자신의 클래스</typeparam>
	template<class _This_Class>
	class CommonDLL ASingleton : public AObject
	{
	public:
		static _This_Class& GetSingle()
		{
			static _This_Class instance;
			return instance;
		}
	protected:
		ASingleton(const std::wstring& name) : AObject(name) {}
		~ASingleton() = 0 {}
	private:
		ASingleton(ASingleton& other) = delete;
		ASingleton(const ASingleton& other) = delete;
		ASingleton& operator=(ASingleton& other) = delete;
		ASingleton& operator=(const ASingleton& other) = delete;
	};
}
#endif // !DECLARE_ASINGLETON_H