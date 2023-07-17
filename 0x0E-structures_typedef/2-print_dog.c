#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * print_dog - fuction that prints struct dog
  * @d: pointer to struct dog
  * Return: void
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("%s\n", d->name);
		else
			printf("(nil)\n");

		printf("%f\n", d->age);

		if (d->owner != NULL)
			printf("%s\n", d->owner);
		else
			printf("(nil)\n");
	}
}
