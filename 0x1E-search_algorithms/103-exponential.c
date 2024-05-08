#include "search_algos.h"

/**
  * _binary_search - Searches for a value in a sorted array
  *                  of binary search.
  * @array: A pointerfirst element arra.
  * @left: The starting index [sub]array.
  * @right: The ending index [sub]array.
  * @value: The value search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index the value is located.
  *
  * Description: Prints [sub]array searched after change.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
  * exponential_search - Searches for a value sorted array
  *                      of integers using exponential search.
  * @array: A pointer first element array to search.
  * @size: The number elements array.
  * @value: The value search 
  *
  * Return: If the value is not present or array is NULL, -1.
  *         Otherwise, the index where value  located.
  *
  * Description: Prints a value compared array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}