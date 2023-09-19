#ifndef DECLARE_ASINGLETON_H
#define DECLARE_ASINGLETON_H

#ifndef INCLUDE_AOBJECT_H
#define INCLUDE_AOBJECT_H
#include "AObject.h"
#endif // !INCLUDE_AOBJECT_H

/// <summary>
/// <para>����� ���� �̱����� ������ �ݴϴ�.</para>
/// </summary>
/// <typeparam name="_This_Class">�ڽ��� Ŭ����</typeparam>
template<class _This_Class>
class ASingleton : public AObject
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

#endif // !DECLARE_ASINGLETON_H