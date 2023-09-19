#ifndef DECLARE_ASTATE_H
#define DECLARE_ASTATE_H

#ifndef INCLUDE_ASINGLETON_H
#define INCLUDE_ASINGLETON_H
#include "ASingleton.h"
#endif // !INCLUDE_ASINGLETON_H
#ifndef INCLUDE_ISEQUENECES
#define INCLUDE_ISEQUENECES
#include "ISequeneces.h"
#endif // !INCLUDE_ISEQUENECES

/// <summary>
/// ������ �⺻�� �Դϴ�.
/// </summary>
/// <typeparam name="_SequenecesData">������(AObject)</typeparam>
/// <typeparam name="_This_Class">�ڽ��� Ŭ����</typeparam>
template<class _SequenecesData, class _This_Class>
class ASequeneces : public ASingleton<_This_Class>, public ISequeneces
{
	void Enter() override = 0;
	virtual void Action() override = 0;
	virtual void Exit() override = 0;
protected:
	ASequeneces(const std::wstring& name) : ASingleton<_This_Class>(name)
	{
		_data = std::make_shared<_SequenecesData>();
	}
	virtual ~ASequeneces()
	{
			_data.reset();
	}
private:
	std::shared_ptr<_SequenecesData> _data;
};

#endif // !DECLARE_ASTATE_H

