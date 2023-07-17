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

#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
