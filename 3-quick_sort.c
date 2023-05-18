#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order using the "Quick"
 *              sort algorithm
 * @array: array to sort
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	real_size = size;
	quick_helper(array, 0, size - 1);
}

/**
 * quick_helper - Sort an array using recursion "Quick"
 * @array: array to sort
 * @left: firts integer
 * @right: last integer
 */

void quick_helper(int *array, int left, int right)
{
	int part;

	if (left > right)
		return;

	part = part_array(array, left, right);

	quick_helper(array, left, part - 1);
	quick_helper(array, part + 1, right);
}

/**
 * part_array - divide and array to sort
 * @array: array to sort
 * @left: "first integer"
 * @right: "last integer"
 *
 * Return: partition, integer
 */

int part_array(int *array, int left, int right)
{
	int j, i = left, pivot = array[right];

	for (j = left; j <= right; j++)
	{
		if (array[j] < pivot)
		{
			swap(array, i, j);
			i++;
		}
	}
	swap(array, i, right);

	return (i);
}
/**
 * swap - exchange the value of two integer and execute the function
 *        "print_array", for print the result
 * @array: array of integers
 * @a: a integer for swap
 * @b: a intenger for swap
 */
void swap(int *array, int a, int b)
{
	int tmp = array[a];

	if (array[a] != array[b])
	{
		array[a] = array[b];
		array[b] = tmp;
		print_array(array, real_size);
	}
}
