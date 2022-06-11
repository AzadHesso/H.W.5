#pragma once
#include <iostream>

using namespace std;

class Snack
{
public:
	// Конструкторы
	Snack(string name, int price, int calories);
	Snack(string name);

	// Деструктор
	~Snack();

	// Функции Геттеры и Сеттеры 
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
	// Конструктор
	SnackSlot(int snacksCount, int freeSpaceCount);
	SnackSlot(int freeSpaceCount);

	// Деструктор
	~SnackSlot();

	// Функция
	void addSnack(Snack* snack);

    // Перегрузка операторов
	SnackSlot& operator++();
	SnackSlot& operator--();

private:
	int snacksCount;
	int freeSpaceCount;
};

class VendingMachine
{
public:
	// Конструктор
	VendingMachine(int slotsCount);

	// Деструктор
	~VendingMachine();
	
	// Функции Геттеры и Сеттеры 
	int getEmptySlotsCount() const;
    void setEmptySlotsCount(int value);

	// Функция
	void addSlot(SnackSlot* snackSlot);

	// Перегрузка операторов
	VendingMachine& operator++();
	VendingMachine& operator--();


private:
	int slotsCount;
	int emptySlotsCount;
};
