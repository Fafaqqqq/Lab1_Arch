#include "DNSComputerBuilder.h"

DNSComputerBuilder::DNSComputerBuilder(IComponentsParser& parser)
	: _parser(parser), _comp(new Computer) {
}

void DNSComputerBuilder::Reset()
{
}

void DNSComputerBuilder::BuildGraphicalCard()
{
	_comp->SetGraphicalCard(_parser.ParseGraphicalCard());
}

void DNSComputerBuilder::BuildStorage()
{
	_comp->SetStorage(_parser.ParseStorage());
}

void DNSComputerBuilder::BuildMemory()
{
	_comp->SetMemory(_parser.ParseMemory());
}

void DNSComputerBuilder::BuildMotherboard()
{
	_comp->SetMotherboard(_parser.ParseMotherboard());
}
