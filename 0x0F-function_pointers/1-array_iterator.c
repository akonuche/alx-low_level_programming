#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element an the array
 * @array: array is iterate over
 * @size: size of the array
 * @action: pointer to the function used
 */
void array_iterator(int *array, size, size_t, void (*action)(int))
{
	unsigned int i;

	if (!array || !action
			return;

			for (i = 0; i < size: i++)
			action(array[i]);
			}
