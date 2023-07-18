#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - function that free the allocated memory for dogs
  * @d: pointer to dog_t
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
