#pragma once
#include <iostream>

using namespace std;

class Snack
{
public:
	// ������������
	Snack(string name, int price, int calories);
	Snack(string name);

	// ����������
	~Snack();

	// ������� ������� � ������� 
	int getPrice() const;
	void setPrice(int value);

	int getCalories() const;
	void setCalories(int value);

private:
	string name;
	int price;
	int calories;
};

class SnackSlot
{
public:
	// �����������
	SnackSlot(int snacksCount, int freeSpaceCount);
	SnackSlot(int freeSpaceCount);

	// ����������
	~SnackSlot();

	// �������
	void addSnack(Snack* snack);

    // ���������� ����������
	SnackSlot& operator++();
	SnackSlot& operator--();

private:
	int snacksCount;
	int freeSpaceCount;
};

class VendingMachine
{
public:
	// �����������
	VendingMachine(int slotsCount);

	// ����������
	~VendingMachine();
	
	// ������� ������� � ������� 
	int getEmptySlotsCount() const;
    void setEmptySlotsCount(int value);

	// �������
	void addSlot(SnackSlot* snackSlot);

	// ���������� ����������
	VendingMachine& operator++();
	VendingMachine& operator--();


private:
	int slotsCount;
	int emptySlotsCount;
};
