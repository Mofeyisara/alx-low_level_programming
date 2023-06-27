#include "main.h"
/**
 * _strlen - Function that returns the length of string
 * @s: string
 * Return: Length
 */

int _strlen(char *s)
{
	int book = 0;

	while (*s != '\0')
	{
		book++;
		s++;
	}

	return (book);
}
