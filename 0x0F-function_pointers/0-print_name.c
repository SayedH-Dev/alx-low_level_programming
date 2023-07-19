#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - a function that prints name that takes 2 arguments
  * string and pointer to function
  * @name: string
  * @f: pointer to function
  * Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
