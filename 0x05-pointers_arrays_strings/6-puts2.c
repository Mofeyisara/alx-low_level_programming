#include "main.h"
/**
 * puts2 - Print every other char of a string from the first char
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int i = 0;
	char *l = str;
	int o;

	while (*l != '\0')
	{
		l++;
		longi++;
	}
	i = longi - 1;
	for (o = 0; o <= i; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
