#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - makes new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a = 0, b = 0, c;
	dog_t *doggo;

	while (name[a] != '\0')
		a++;
	while (owner[b] != '\0')
		b++;
	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
	{
		free(doggo);
		return (NULL);
	}
	doggo->name = malloc(a * sizeof(doggo->name));
	if (doggo->name == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	for (c = 0; c <= b; c++)
		doggo->name[c] = name[c];
	doggo->age = age;
	doggo->owner = malloc(b * sizeof(doggo->owner));
	if (doggo->owner == NULL)
	{
		free(doggo->owner);
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	for (c = 0; c <= b; c++)
		doggo->owner[c] = owner[c];
	return (doggo);
}
