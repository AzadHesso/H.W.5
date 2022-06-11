#include <iostream>
#include "VendingMachine.h"

using namespace std;

int main(int argc, char* argv[])
{
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(10 /*количество батончиков, которые помещаютс€ в слот*/);
	slot->addSnack(bounty); //ƒобавл€ем батончик в слот
	slot->addSnack(snickers);
	VendingMachine* machine = new VendingMachine(5 /* оличество слотов дл€ снеков*/);
	machine->addSlot(slot); // ѕомещаем слот обратно в аппарат

	cout << machine->getEmptySlotsCount() << endl; // ƒолжно выводить количество пустых слотов дл€ снеков

	delete machine;
	delete slot;
	delete snickers;
	delete bounty;

	return 0;
}