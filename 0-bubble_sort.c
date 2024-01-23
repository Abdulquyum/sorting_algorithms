#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - using bubble sort algorithm to sort array
 *
 * @array: Array to be sorted
 * @size: size of array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t q, idx;
	int temp;

	if (size < 2)
		return;

	for (q = 1; q <= size; q++)
	{
		for (idx = 0; idx < size - 1; idx++)
		{
			if (array[idx] > array[idx + 1] && array[idx])
			{
				temp = array[idx];
				array[idx] = array[idx + 1];
				array[idx + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
