#pragma once
#ifndef DECLARE_ASTATE_H
#define DECLARE_ASTATE_H
////////////////////////////////////////////////////////////////////////////////
// dll ���� import exprot
#ifndef DECLARE_COMMONDLL
#define DECLARE_COMMONDLL
#ifdef _CommonCore
#define CommonDLL __declspec(dllexport)
#else
#define CommonDLL __declspec(dllImport)
#endif // _CommonCore
#endif // !DECLARE_COMMONDLL
////////////////////////////////////////////////////////////////////////////////
// �ܺ� �ڵ� ÷��
#include <string>
////////////////////////////////////////////////////////////////////////////////
// ���� �ڵ� ÷��
#include "Interface/ISequeneces.h"
#include "ASingleton.h"
////////////////////////////////////////////////////////////////////////////////
// ����
namespace CommonCore {
	/// <summary>
	/// ������ �⺻�� �Դϴ�.
	/// </summary>
	/// <typeparam name="_SequenecesData">Data(AObject)</typeparam>
	/// <typeparam name="_This_Class">Class</typeparam>
	template<class _SequenecesData, class _This_Class>
	class CommonDLL ASequeneces : public ASingleton<_This_Class>, public Interface::ISequeneces
	{
		void Enter() override = 0;
		virtual void Action() override = 0;
		virtual void Exit() override = 0;
	protected:
		ASequeneces(const std::wstring& name) : ASingleton<_This_Class>(name)
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
////////////////////////////////////////////////////////////////////////////////
#endif // !DECLARE_ASTATE_H

