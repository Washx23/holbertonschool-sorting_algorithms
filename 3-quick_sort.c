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
	int cont;

	if (max - min > 0)
	{
		cont = quick_mix(array, size, min, max);
		quick_aux(array, size, min, cont - 1);
		quick_aux(array, size, cont + 1, max);
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

	int *cont, tmp, aux;

	cont = array + max;
	for (tmp = aux = min; aux < max; aux++)
	{
		if (array[aux] < *cont)
		{
			if (tmp < aux)
			{
				swap(array + aux, array + tmp);
				print_array(array, size);
			}
			tmp++;
		}
	}

	if (array[tmp] > *cont)
	{
		swap(array + tmp, cont);
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
