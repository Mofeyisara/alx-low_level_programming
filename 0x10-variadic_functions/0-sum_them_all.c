#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Return the sum of all parameters
 * @n: Number of parameters
 * @...: Variable number of parameters
 *
 * Return: if n == 0 - 0. Or the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
