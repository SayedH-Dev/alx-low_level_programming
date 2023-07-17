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
		printf("%s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("%f\n", d->age);
		printf("%s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
