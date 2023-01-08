#include <stdio.h>
#include "main.h"
/**
 * main - print name of program, then new line
 * @argc: counts arguments
 * @argv: arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
