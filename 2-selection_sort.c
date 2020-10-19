#include "sort.h"

/**
 * swap - Swap the value of two variables
 * @x: Integer
 * @y: Intger
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * selection_sort - sorts an array of integers
 * @array: array unsorted
 * @size: size of the array
 *
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}
		}
		swap(&array[min_idx], &array[i]);
		print_array(array, size);
	}
}
