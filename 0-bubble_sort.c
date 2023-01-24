#include "sort.h"
/**
 * swap - function to interchange two numbers
 * @first: first number
 * @second: second number
 * Return: void
 */
void swap(int *first, int *second)
{
	int temp;

	temp = *first;
	*first = *second;
	*second = temp;
}

/**
 * bubble_sort - sorts an array using bubble sort
 * @array: array of numbers to sort
 * @size: size of the array
 * Return: returns (void)
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 2)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size - i; j++)
		{
			if (array[j] < array[j - 1])
			{
				swap(&array[j], &array[j - 1]);
				print_array(array, size);
			}
		}
	}

}
