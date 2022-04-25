#include "Computer.h"

Computer::Computer()
	: _mboard(new Motherboard),
	  _memory(new Memory),
	  _storage(new Storage),
	  _gcard(new GraphicalCard) {}

void Computer::SetMotherboard(const Motherboard* mboard)
{
	std::memcpy(_mboard, mboard, sizeof(Motherboard));
}

void Computer::SetMemory(const Memory* memory)
{
	std::memcpy(_memory, memory, sizeof(Memory));
}

void Computer::SetStorage(const Storage* storage)
{
	std::memcpy(_storage, storage, sizeof(Storage));
}

void Computer::SetGraphicalCard(const GraphicalCard* gcard)
{
	std::memcpy(_gcard, gcard, sizeof(GraphicalCard));
}

Computer::~Computer()
{
	if (_mboard)
	{
		delete _mboard;
	}

	if (_memory)
	{
		delete _memory;
	}

	if (_storage)
	{
		delete _storage;
	}

	if (_gcard)
	{
		delete _gcard;
	}

}
