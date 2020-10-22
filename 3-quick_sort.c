#include "sort.h"
#include <stdlib.h>

/**
 * swap - Swap the value of two variables
 *
 * @x: first value
 * @y: second value
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * split - function that split the array
 * @array: array
 * @size: size
 * @low: low value
 * @high: high value
 *Return: int i
 */
int split(int *array, size_t size, int low, int high)
{
	int i, j, piv;

	i = low - 1;
	piv = array[high];

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] > piv)
			continue;

		i++;
		swap(&array[j], &array[j]);
		if (i != j)
			print_array(array, size);

	}

	swap(&array[high], &array[i + 1]);
	if (i + 1 != j)
		print_array(array, size);

	return (i + 1);
}

/**
 * sort - function that sorts an array
 * @array: array
 * @size: size of the array
 * @low: low value
 * @high: high value
 */
void sort(int *array, size_t size, int low, int high)
{
	if (low < high)
	{
		int part;

		part = split(array, size, low, high);
		sort(array, size, low, part - 1);
		sort(array, size, part + 1, high);
	}
}

/**
 * quick_sort - quick sort
 * @array: array unsorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	sort(array, size, 0, size - 1);
}
