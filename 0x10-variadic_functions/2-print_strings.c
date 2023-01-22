#include "variadic_functions.h"

/**
 * print_string - prints strings followed by new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *j;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		j =  va_arg(list, char *);

		if (j)
			printf("%s", j);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
