#pragma once
#ifndef DECLARE_ISEQUENECES_H
#define DECLARE_ISEQUENECES_H
////////////////////////////////////////////////////////////////////////////////
#include "Base/Define/CommonLibraryBaseDefine.h"
////////////////////////////////////////////////////////////////////////////////
namespace common_library {
	namespace base {
		class CommonDLL ISequeneces
		{
			virtual void Enter() = 0;
			virtual void Action() = 0;
			virtual void Exit() = 0;
		};
	}
}
////////////////////////////////////////////////////////////////////////////////
#endif // !DECLARE_ISEQUENECES_H