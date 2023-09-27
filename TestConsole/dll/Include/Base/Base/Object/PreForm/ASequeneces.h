#pragma once
#ifndef DECLARE_ASTATE_H
#define DECLARE_ASTATE_H
////////////////////////////////////////////////////////////////////////////////
#include "Base/Define/CommonLibraryBaseDefine.h"
#include "Base/String/CommonLibraryBaseString.h"
#include "Base/Object/Interface/ISequeneces.h"
#include "Base/Object/PreForm/ASingleton.h"
////////////////////////////////////////////////////////////////////////////////
namespace common_library {
	namespace base {
		/// <summary>
		/// Sequenece Base Form.
		/// </summary>
		/// <typeparam name="_SequenecesData">Data(AObject)</typeparam>
		/// <typeparam name="_This_Class">Class</typeparam>
		template<class _SequenecesData, class _This_Class>
		class CommonDLL ASequeneces : public ASingleton<_This_Class>, public ISequeneces
		{
			void Enter() override = 0;
			virtual void Action() override = 0;
			virtual void Exit() override = 0;
		protected:
			ASequeneces() : ASingleton<_This_Class>()
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
	}
}
////////////////////////////////////////////////////////////////////////////////
#endif // !DECLARE_ASTATE_H

