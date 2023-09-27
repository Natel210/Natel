#pragma once
#ifndef DECLARE_ASEQUENECESSTATE_H
#define DECLARE_ASEQUENECESSTATE_H
////////////////////////////////////////////////////////////////////////////////
#include "Base/Define/LibDefine.h"
#include "Base/String/LibString.h"
#include "Base/Form/Sequeneces/ISequenecesState.h"
#include "Base/Form/Singleton/ASingleton.h"
////////////////////////////////////////////////////////////////////////////////
namespace common {
	/// <summary>
	/// Sequenece Base Form.
	/// </summary>
	/// <typeparam name="_SequenecesData">Data(AObject)</typeparam>
	/// <typeparam name="_This_Class">Class</typeparam>
	template<class _data, class _This_Class>
	class ASequenecesState : public ASingleton<_This_Class>, ISequenecesState<_data>
	{
	public:
		virtual void Begin(std::weak_ptr<_data> data) override = 0;
		virtual void Action(std::weak_ptr<_data> data) override = 0;
		virtual void End(std::weak_ptr<_data> data) override = 0;
	};
}
////////////////////////////////////////////////////////////////////////////////
#endif // !DECLARE_ASEQUENECESSTATE_H

