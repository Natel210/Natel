#pragma once
#ifndef DECLARE_ASEQUENCESTATE_H
#define DECLARE_ASEQUENCESTATE_H
#include <memory>
#include "ShareForm/Define/ShareFormDefine_Namespace.h"
#include "ShareForm/Sequence/ISequenceState.h"
#include "ShareForm/Singleton/ASingleton.h"
BEGINE_SPACE_SF_SEQUENCE
/// <summary>
/// Sequenece Item Base Form.
/// </summary>
/// <typeparam name="_This_Class">Class</typeparam>
/// <typeparam name="_data">Data(AObject)</typeparam>
template<class _This_Class, class _data>
class ASequenceState : public SPACE_SF_SINGLETON::ASingleton<_This_Class>, ISequenceState<_data>
{
public:
	virtual void Begin(std::weak_ptr<_data> data) override = 0;
	virtual void Action(std::weak_ptr<_data> data) override = 0;
	virtual void End(std::weak_ptr<_data> data) override = 0;
protected:
	//ASequenceState() : SPACE_SF_SINGLETON::ASingleton<_This_Class>(L"SequenceState") {};
	ASequenceState(std::wstring name) : SPACE_SF_SINGLETON::ASingleton<_This_Class>(name) {};
};
END_SPACE
#endif // !DECLARE_ASEQUENECESSTATE_H

