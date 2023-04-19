#include "function_pointers.h"

/**
 * array_iterator - function executes function given as para
 * @array: array
 * @size: size of the array
 * @pointer: pointer of the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *p;
	unsigned int i;

	p = array;
	if (array && size && action)
	for (i = 0; i < size; i++)
		action(p[i]);
}
