#pragma once
#ifndef DECLARE_ILOOPHIERARCHY_H
#define DECLARE_ILOOPHIERARCHY_H
namespace common {
	class ILoopHierarchy
	{
		virtual void Begin() = 0;
		virtual void End() = 0;

		virtual void Update() = 0;
	};
}
#endif // !DECLARE_ILOOPHIERARCHY_H
