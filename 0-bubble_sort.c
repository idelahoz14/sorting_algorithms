#include "sort.h"

/**
* swap - swap the value of 2 variables
* @x: value
* @y: value
*/
void swap(int *x, int *y)
{
		int temp = 0;

		temp = *a;
		*a = *y;
		*y = temp;
}

/**
* bubble_sort - organize the messy array
* @array: array messy
* @size: size of the array
*
* Return: 0
*/
void bubble_sort(int *array, size_t size)
{
		size_t i, j;

		if (!array || size < 2)
		{
				return;
		}
		else
		{
			for (i = 0; i < size - 1; i++)
			{
				for (j = 0; j < size - 1 - i; j++)
				{
					if (array[j] > array[j + 1])
					{
							swap(&array(j), &array(j + 1));
							print_array(array, size);
					}
				}
			}
		}
}
