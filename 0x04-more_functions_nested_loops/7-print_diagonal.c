#include "main.h"

/**
 * print_diagonal - Draw a diagonal line
 * @n: Input variable
 *
 * Return: Void
 */

void print_diagonal(int n)
{
	int c, d;

	if (n <= 0)
		_putchar('\n');
	for (c = 0; c < n; c++)
	{
		for (d = 0; d < c; d++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
