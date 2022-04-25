#pragma once
#include <cstdint>

struct Motherboard
{
	uint16_t NumOfMemorySlot;
	uint16_t MemoryFrequency;
	uint8_t* Socket = nullptr;
	bool SoundCard;
};

struct Memory
{
	uint16_t Size;
	uint16_t Frequency;
	uint8_t* MemoryType = nullptr;
};

struct Storage
{
	uint16_t Speed;
	uint16_t Size;
	uint16_t FormFactor;
	uint8_t* StorageType = nullptr;
	bool NVMe;
};

struct GraphicalCard
{
	uint8_t* GraphicalMemoryType = nullptr;
	uint16_t GraphicalMemorySize;
	uint16_t Bus;
	uint8_t* Producer;
};