#include <vector>
#include <iostream>
#include "handler.h"

std::vector<int> searchKey(int *array, int size, int key)
{
	std::vector<int> keys;
	for (int i = 0; i < size; i++)
	{
		if (array[i] == key)
		{
			keys.push_back(i);
		}
	}
	return keys;
}