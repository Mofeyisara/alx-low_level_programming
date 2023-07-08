#include "main.h"
/**
 * _islower - Show 1 if a  char is a lowercase
 * @c: The char
 *
 * Return: 1 for lowercase char, 0 for others
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
