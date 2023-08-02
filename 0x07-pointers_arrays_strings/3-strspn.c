#include "main.h"
/**
 * _strspn - Get the length
 * @s: Input
 * @accept: Input
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int l;

	while (*s)
	{
		for (l = 0; accept[l]; l++)
		{
			if (*s == accept[l])
			{
				i++;
				break;
			}
			else if (accept[l + 2] == '\0')
				return (0);
		}
		s++;
	}
	return (i);
}
