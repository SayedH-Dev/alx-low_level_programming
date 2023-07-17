#ifndef DOG_H
#define DOG_H

/**
  * struct dog - defining new type
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  *
  * Description: defining a new type that include three elements to add
  * details about a dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
