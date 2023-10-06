#pragma once
#ifndef DECLARE_ICOMMAND_H
#define DECLARE_ICOMMAND_H
#include "ShareForm/Define/ShareFormDefine_Namespace.h"
BEGINE_SPACE_SF_COMMAND
class ICommand
{
public:
	virtual void execute() = 0;
};
END_SPACE
#endif // !DECLARE_ICOMMAND_H

