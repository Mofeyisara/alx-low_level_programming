#include "main.h"
/**
 * _memset - Fill a block of memory
 * @s: Starting address
 * @b: value
 * @n: Number of byte
 *
 * Return: New value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
