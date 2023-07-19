#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Print a name
 * @name: String
 * @f: Pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
