#include <iostream>
#include "VendingMachine.h"

using namespace std;

int main(int argc, char* argv[])
{
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(10 /*���������� ����������, ������� ���������� � ����*/);
	slot->addSnack(bounty); //��������� �������� � ����
	slot->addSnack(snickers);
	VendingMachine* machine = new VendingMachine(5 /*���������� ������ ��� ������*/);
	machine->addSlot(slot); // �������� ���� ������� � �������

	cout << machine->getEmptySlotsCount() << endl; // ������ �������� ���������� ������ ������ ��� ������

	delete machine;
	delete slot;
	delete snickers;
	delete bounty;

	return 0;
}