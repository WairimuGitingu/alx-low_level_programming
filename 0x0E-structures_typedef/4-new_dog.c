#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * dog_t n-  creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nameLen, ownerLen, i;
	dog_t *d1;

	d1 = (dog_t *) malloc(sizeof(dog_t));
	if (d1 == NULL)
		return (NULL);
	while (name[nameLen++])
		;
	while (owner[owner++])
		;
	d1->name = malloc(nameLen * sizeof(d1->name));
	if (d1->name == NULL)
	{
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= nameLen; i++)
		d1->name[i] = name[i];
	d1->age = age;
	d1->owner = malloc(ownerLen * sizeof(d1->owner));
	if (d1->owner == NULL)
	{
		free(d1->name);
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= ownerLen; i++)
		d1->owner[i] = owner [i];
	return (d1);
}
