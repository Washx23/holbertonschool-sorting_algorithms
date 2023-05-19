#include "sort.h"
#include <stdio.h>
/**
 * bubble_sort - algorithm bubble sort
 * @array: array to sort
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	int iter;
	size_t i, j;

	if (array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				iter = array[j + 1];
				array[j + 1] = array[j];
				array[j] = iter;
				print_array(array, size);
			}
		}
	}
}
