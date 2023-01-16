#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 *@d: dog data type
 *@name: dog name
 *age: dog age
 *@:owner dog owner
 *Return: N/a
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if  (d)
	{
		d->name = name;
		d->age = age;
		d->age = owner;
	}
}