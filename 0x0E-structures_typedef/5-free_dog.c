#include <stdlib>
#include "dog.h"

/**
  * free_dog - function that free the memory of the dogs
  * @d: pointer to struct dog
  * Return: void
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
}
