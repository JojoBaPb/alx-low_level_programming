#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: char name
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
