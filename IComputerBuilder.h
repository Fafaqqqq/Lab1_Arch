#pragma once
#include "Computer.h"


class IComputerBuilder
{
public:
	virtual void Reset() = 0;
	virtual void BuildGraphicalCard() = 0;
	virtual void BuildStorage() = 0;
	virtual void BuildMemory() = 0;
	virtual void BuildMotherboard() = 0;
};
