#pragma once
#include "Components.h"

class IComponentsParser
{
public: 
	Motherboard* ParseMotherboard();
	Memory* ParseMemory();
	Storage* ParseStorage();
	GraphicalCard* ParseGraphicalCard();
};

