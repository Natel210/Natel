#pragma once
#ifndef DECLARE_ASINGLETON_H
#define DECLARE_ASINGLETON_H
////////////////////////////////////////////////////////////////////////////////
// dll ���� import exprot
#ifndef DECLARE_COMMONDLL
#define DECLARE_COMMONDLL
#ifdef _CommonCore
#define CommonDLL __declspec(dllexport)
#else
#define CommonDLL __declspec(dllImport)
#endif // _CommonCore
#endif // !DECLARE_COMMONDLL
////////////////////////////////////////////////////////////////////////////////
// �ܺ� �ڵ� ÷��
#include <string>
////////////////////////////////////////////////////////////////////////////////
// ���� �ڵ� ÷��
#include "AObject.h"
////////////////////////////////////////////////////////////////////////////////
// ����
namespace CommonCore {
	/// <summary>
	/// <para>����� ���� �̱����� ������ �ݴϴ�.</para>
	/// </summary>
	/// <typeparam name="_This_Class">�ڽ��� Ŭ����</typeparam>
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