#include "function_pointers.h"

/**
 * print_name - function that print a name
 * @name: char
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
