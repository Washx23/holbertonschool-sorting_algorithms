#include "sort.h"
/**
 * selection_sort - selection sort alg.
 * @array: array to sort
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, var1;
	int temp;


	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		var1 = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[var1])
			{
				var1 = j;
			}
		}
		if (var1 != i)
		{
			temp = array[i];
			array[i] = array[var1];
			array[var1] = temp;
			print_array(array, size);
		}
	}
}
