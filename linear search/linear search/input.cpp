#include <iostream>
#include <Windows.h>
#include<time.h>
#include "input.h"

int *initArray()
{
	srand(time(nullptr));
	const int size = 20;
	int *randArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		randArray[i] = rand() % 10;
	}
	return randArray;
}

void showArray(int *array, int size)
{
	std::cout << "Random generated array is: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << "\n";
}

int GetKey()
{
	int key;
	std::cout << "Enter a key for linear search in random generated array (key must be from 0 to 10)\n";
	std::cin >> key;
	if (!std::cin >> key) throw - 1;
	return key;
}
