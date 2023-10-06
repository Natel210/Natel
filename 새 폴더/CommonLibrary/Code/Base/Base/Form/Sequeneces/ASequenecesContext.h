#pragma once
#ifndef DECALE_ASEQUENECESCONTEXT_H
#define DECALE_ASEQUENECESCONTEXT_H
#include <memory>
#include "Base/Form/Singleton/ASingleton.h"
#include "Base/Form/Sequeneces/ISequenecesState.h"
#include "Base/Form/Sequeneces/ASequenecesState.h"
namespace common {
	template<class _data, class _This_Class>
	class ASequenecesContext : public ASingleton<_This_Class>
	{
	public:
		void execute()
		{
			CheckToChange();
			currentState.Action(data);
			CheckToChange();
		}
	private:
		void CheckToChange()
		{
			if (currentState != nextState)
			{
				currentState.Begin(data);
				nextState.End(data);
				currentState = nextState;
			}
		}
	private:
		ASequenecesState& currentState;
		ASequenecesState& nextState;
	private:
		std::weak_ptr<_data> data;
	};
}



#endif // !DECALE_ASEQUENECESCONTEXT_H
