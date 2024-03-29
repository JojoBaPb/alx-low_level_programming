#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: dog
 * Return: n/a
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}

