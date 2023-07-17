#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
  * init_dog - function that initialize a variable of type struct dog
  * @d: pointer to the variable struct dog
  * @name: pointer to name in struct dog
  * @age: age of the dog
  * @owner: pointer to owner in struct dog
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
	{
		return;
	}

	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}
