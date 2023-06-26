#include "main.h"

/**
 * print_square - Print a square
 * @size: Size of the square
 * Return: Void
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
		for (a = 0; a < size; b++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
