#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int l = 'a';

	while (l <= 'z')
	{
		if (l == 'e' || l == 'q')
		{
			l += 1;
		}
	}
	else
	{
		putchar(l);
		l += 1;
	}
	putchar('n\');
	return (0);
}
