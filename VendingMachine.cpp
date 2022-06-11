#include "VendingMachine.h"

VendingMachine::VendingMachine(int slotsCount)
{
	this->slotsCount = slotsCount;
	emptySlotsCount = slotsCount;
}

VendingMachine::~VendingMachine()
{
	
}

int VendingMachine::getEmptySlotsCount() const
{
	return emptySlotsCount;
}


VendingMachine& VendingMachine::operator++()
{
	++slotsCount;
	return *this;
}

VendingMachine& VendingMachine::operator--()
{
	--emptySlotsCount;
	return *this;
}

void VendingMachine::addSlot(SnackSlot* snackSlot)
{
	++slotsCount;
	--emptySlotsCount;
}

void VendingMachine::setEmptySlotsCount(int value)
{
	emptySlotsCount = value;
}



SnackSlot::SnackSlot(int snacksCount, int freeSpaceCount)
{
	this->snacksCount = snacksCount;
	this->freeSpaceCount = freeSpaceCount;
}

SnackSlot::SnackSlot(int snacksCount)
{
	this->snacksCount = snacksCount;
	freeSpaceCount = snacksCount;
}

SnackSlot::~SnackSlot()
{

}

void SnackSlot::addSnack(Snack* snack)
{
	++snacksCount;
	--freeSpaceCount;
}

SnackSlot& SnackSlot::operator++()
{
	++snacksCount;
	return *this;
}

SnackSlot& SnackSlot::operator--()
{
	--freeSpaceCount;
	return *this;
}

Snack::Snack(string name, int price, int calories)
{
	this->name = name;
	this->price = price;
	this->calories = calories;
}

Snack::Snack(string name)
{
	this->name = name;
}

Snack::~Snack()
{
}

int Snack::getPrice() const
{
	return price;
}

void Snack::setPrice(int value)
{
	price = value;
}

int Snack::getCalories() const
{
	return calories;
}

void Snack::setCalories(int value)
{
	calories = value;
}
