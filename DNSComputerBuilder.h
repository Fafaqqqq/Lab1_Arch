#pragma once
#include "IComputerBuilder.h"
#include "IComponentsParser.h"

class DNSComputerBuilder :  public IComputerBuilder
{
public:
	DNSComputerBuilder(IComponentsParser& parser);

	virtual void Reset() override;
	virtual void BuildGraphicalCard() override;
	virtual void BuildStorage() override;
	virtual void BuildMemory() override;
	virtual void BuildMotherboard() override;

private:
	IComponentsParser& _parser;
	Computer* _comp;
};

