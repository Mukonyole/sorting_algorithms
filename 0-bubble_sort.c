#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - sorts an array of integers in
 * ascending order using a bubble sort algorithm.
 * @array: array
 * @size: array size
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, index;
	int tmp;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (index = 0; index < size - i - 1; index++)
		{
			if (array[index] > array[index + 1])
			{
				tmp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
