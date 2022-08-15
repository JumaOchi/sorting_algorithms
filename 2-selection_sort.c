#include "sort.h"

/**
 * selection_sort - Sorts an array with selection sort algorithm
 *
 * @array: Array to be sorted
 *
 * @size: size of the array
 *
 * Return: Nothing
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, index;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		temp = array[i];
		for (j = i; j < size; j++)
		{
			if (array[j] < temp)
			{
				temp = array[j];
				index = j;
			}
		}
		if (array[i] == temp)
			continue;
		array[index] = array[i];
		array[i] = temp;
		print_array((const int *)array, size);
	}
}
