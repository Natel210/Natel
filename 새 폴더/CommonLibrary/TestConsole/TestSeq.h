#pragma once
#include "Base/Form/Sequeneces/ASequenecesState.h"
class TestSeqData
{

};

class TestSeq : public commonlib::ASequenecesState<TestSeqData,TestSeq>
{
public:
	virtual void Enter(TestSeqData&) final {}
	virtual void Action(TestSeqData&) final {}
	virtual void Exit(TestSeqData&) final {}
private:

};

