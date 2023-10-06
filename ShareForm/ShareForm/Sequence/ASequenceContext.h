#pragma once
#ifndef DECALE_ASEQUENCECONTEXT_H
#define DECALE_ASEQUENCECONTEXT_H
#include <memory>
#include "ShareForm/Define/ShareFormDefine_Namespace.h"
#include "ShareForm/Singleton/ASingleton.h"
#include "ShareForm/Command/ICommand.h"
#include "ShareForm/Sequence/ASequenceState.h"
BEGINE_SPACE_SF_SEQUENCE
template<class _data, class _This_Class>
class ASequenceContext : public SPACE_SF_SINGLETON::ASingleton<_This_Class>
{
public:
	virtual void execute() final
	{
		CheckToChange();
		curState->Action(data);
		CheckToChange();
	}
public:
	void ChangeState() {}
private:
	void CheckToChange()
	{
		if (curState->GetName() != nextState->GetName())
		{
			curState->Begin(data);
			nextState->End(data);
			curState = nextState;
		}
	}
protected:
	virtual void Init() = 0;
protected:
	//ASequenceContext() : SPACE_SF_SINGLETON::ASingleton(L"SequenceContext") {}
	ASequenceContext(std::wstring name) : SPACE_SF_SINGLETON::ASingleton<_This_Class>(name) { Init(); }
private:
	ISequenceState<_data>* prevState = nullptr;
	ISequenceState<_data>* curState = nullptr;
	ISequenceState<_data>* nextState = nullptr;
private:
private:
	std::weak_ptr<_data> data;
};
END_SPACE

#endif // !DECALE_ASEQUENCECONTEXT_H
