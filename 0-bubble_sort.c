#include "sort.h"
#include "sort.h"

/**
 * swap - Swap the value of two variables
 *
 * @x: Integer
 * @y: Intger
 **/
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * bubble_sort - Compare consecutive items
 * @array: unsorted array
 * @size: size of the array
 *
 * Return: nothing
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
