#include "3-calc.h"

/**
  * get_op_func - pointer selecting the right function to initiate
  * @s: string of signs
  * Return: pointer to the right function
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};


	int x;

	x = 0;

	while (ops[x].op)
	{
		if (strcmp(ops[x].op, s) == 0)
			return (ops[x].f);
		x++;
	}
	return (NULL);
}
