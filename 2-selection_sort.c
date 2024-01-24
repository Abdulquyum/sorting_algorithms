#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - performs selection sort on array
 *
 * @array: Array to be sorted
 * @size: size of array to be sorted
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t n, idx;
	int temp, swap;

	for (n = 0; n < size; n++)
	{
		temp = n;
		for (idx = n + 1; idx < size; idx++)
		{
			if (array[temp] > array[idx])
				temp = idx;
		}
		swap = array[n];
		array[n] = array[temp];
		array[temp] = swap;
		print_array(array, size);
	}
}
