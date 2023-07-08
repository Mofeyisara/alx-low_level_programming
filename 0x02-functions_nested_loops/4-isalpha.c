#include "main.h"
/**
 * _isalpha - Check for alphbet char
 * @c: char
 *
 * Return: 1 for letters, 0 for the rest
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 97))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
