#include "function_pointers.h"

/**
 * array_iterator - maps an array
 * @array: array
 * @size: array size
 * @action: function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int));
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			actoin(*array++);
}
