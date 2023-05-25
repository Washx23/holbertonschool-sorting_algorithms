#include "sort.h"
/**
 * quick_sort - Quicksort
 * @array: array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (!array)
		return;

	quick_aux(array, size, 0, size - 1);
}
/**
 * quick_aux - Function of recursion for quick sort
 * @array: array
 * @size: size of array
 * @min: min
 * @max: max
 */
void quick_aux(int *array, size_t size, int min, int max)
{
	int smart;

	if (max - min > 0)
	{
		smart = quick_mix(array, size, min, max);
		quick_aux(array, size, min, smart - 1);
		quick_aux(array, size, smart + 1, max);
	}
}
/**
 * quick_mix - Function
 * @array: array
 * @size: size of array
 * @min: left
 * @max: right
 * Return: int
 */
int quick_mix(int *array, size_t size, int min, int max)
{

	int *smart, tmp, aux;

	smart = array + max;
	for (tmp = aux = min; aux < max; aux++)
	{
		if (array[aux] < *smart)
		{
			if (tmp < aux)
			{
				swap(array + aux, array + tmp);
				print_array(array, size);
			}
			tmp++;
		}
	}

	if (array[tmp] > *smart)
	{
		swap(array + tmp, smart);
		print_array(array, size);
	}

	return (tmp);
}
/**
 * swap - Function
 * @x: x
 * @y: y
 */
void swap(int *x, int *y)
{
	int z;

	z = *x;
	*x = *y;
	*y = z;
}
