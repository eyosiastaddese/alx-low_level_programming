#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - run a function given as a parameter on each array element
 *
 * @array: array element
 * @size: size of an array
 * @action: Function to run
 *
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
