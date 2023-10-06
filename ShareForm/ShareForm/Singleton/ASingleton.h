#pragma once
#ifndef DECLARE_ASINGLETON_H
#define DECLARE_ASINGLETON_H
#include "ShareForm/Object/AObject.h"

BEGINE_SPACE_SF_SINGLETON
/// <summary>
/// <para>template Singleton.</para>
/// </summary>
/// <typeparam name="_This_Class">inheritance class</typeparam>
template<typename _This_Class>
class ASingleton : public SPACE_SF_OBJECT::AObject
{
public:
	static _This_Class& Get()
	{
		static _This_Class instance;
		return instance;
	}
protected:
	ASingleton() : AObject(L"Singleton") {}
	ASingleton(std::wstring name) : AObject(name) {}
	//virtual ~ASingleton() = default;
	ASingleton(ASingleton& other) = delete;
	ASingleton(const ASingleton& other) = delete;
	ASingleton& operator=(ASingleton& other) = delete;
	ASingleton& operator=(const ASingleton& other) = delete;
};
END_SPACE
#endif // !DECLARE_ASINGLETON_H