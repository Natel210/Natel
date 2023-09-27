#pragma once
#ifndef DECLARE_ISEQUENECESSTATE_H
#define DECLARE_ISEQUENECESSTATE_H
////////////////////////////////////////////////////////////////////////////////
#include <memory>
#include "Base/Define/LibDefine.h"
////////////////////////////////////////////////////////////////////////////////
namespace commonlib {
	template<class _data>
	class ISequenecesState
	{
	public:
		virtual void Begin(std::weak_ptr<_data> data) = 0;
		virtual void Action(std::weak_ptr<_data> data) = 0;
		virtual void End(std::weak_ptr<_data> data) = 0;
	};
}
////////////////////////////////////////////////////////////////////////////////
#endif // !DECLARE_ISEQUENECES_H