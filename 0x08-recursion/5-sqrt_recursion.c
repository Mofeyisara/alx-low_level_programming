#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Return the natural square root of a number
 * @n: Number
 *
 * Return: Result
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion(n, 1));
}

/**
 * _sqrt - Calculate natural square root
 * @n: Number to calculate
 * @i: Iterator
 *
 * Return: The result of the square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
