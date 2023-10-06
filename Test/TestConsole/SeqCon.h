#pragma once
//#include "ShareCode/"
#include "ShareForm/Sequence/ASequenceContext.h"
#include "SeqData.h"
class SeqCon : public shareform::sequence::ASequenceContext<SeqData, SeqCon>
{
private:
	virtual void Init() final;
protected:
	SeqCon() : ASequenceContext<SeqData, SeqCon>(L"나의 시퀸스 콘택스트") {}
};

