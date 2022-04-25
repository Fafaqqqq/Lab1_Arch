#pragma once
#include "Components.h"
#include <cstring>

class Computer
{
public:
	Computer();

	void SetMotherboard(const Motherboard* mboard);
	void SetMemory(const Memory* memory);
	void SetStorage(const Storage* storage);
	void SetGraphicalCard(const GraphicalCard* gcard);

	~Computer();

private:

	Motherboard* _mboard = nullptr;
	Memory* _memory = nullptr;
	Storage* _storage = nullptr;
	GraphicalCard* _gcard = nullptr;
};

