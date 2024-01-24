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
	int temp, swap, to_print;

	for (n = 0; n < size; n++)
	{
		temp = n;
		to_print = 0;
		for (idx = n + 1; idx < size; idx++)
		{
			if (array[temp] > array[idx])
			{
				temp = idx;
				to_print = 1;
			}
		}
		swap = array[n];
		array[n] = array[temp];
		array[temp] = swap;
		if (to_print)
			print_array(array, size);
	}
}
