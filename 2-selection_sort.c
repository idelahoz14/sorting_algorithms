#include "sort.h"

/**
 * selection_sort - selection sort method
 *
 * @array: sorted array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, temp;
	int min_idx = 0, cond, swap;

	if (array == NULL || size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (min_idx > array[j])
			{
				temp = j;
				min_idx = array[j];
				cond = 1;
			}
		}
		if (cond)
		{
			swap = array[i];
			array[i] = min_idx;
			array[temp] = swap;
			print_array(array, size);
		}
	}
}
