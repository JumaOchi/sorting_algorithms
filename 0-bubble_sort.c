#include "sort.h"

/**
 * bubble_sort - Sorts an array with bubble sort algorithm
 *
 * @array: Array to be sorted
 *
 * @size: size of the array
 *
 * Return: Nothing
*/

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp, check = 1;

	if (size < 2)
		return;

	while (check)
	{
		check = 0;
		for (i = 0; i < size; i++)
		{
			if (i == size - 1)
				continue;
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				check = 1;
				print_array((const int *)array, size);
			}
		}
	}
}
