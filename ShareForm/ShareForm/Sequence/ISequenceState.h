#pragma once
#ifndef DECLARE_ISEQUENCESTATE_H
#define DECLARE_ISEQUENCESTATE_H
#include <memory>
#include "ShareForm/Define/ShareFormDefine_Namespace.h"
#include "ShareForm/Object/IObject.h"
BEGINE_SPACE_SF_SEQUENCE
template<class _data>
class ISequenceState : public SPACE_SF_OBJECT::IObject
{
public:
	virtual void Begin(std::weak_ptr<_data> data) = 0;
	virtual void Action(std::weak_ptr<_data> data) = 0;
	virtual void End(std::weak_ptr<_data> data) = 0;
};
END_SPACE
#endif // !DECLARE_ISEQUENECES_H