#include "variadic_functions.h"
#include <stdarg.h>

/**
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	va_list list;
	int sum;

	if (n == 0)
	{
		return (0);
	}

	va_start(list, n);

	for (i = 0; i <= n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
