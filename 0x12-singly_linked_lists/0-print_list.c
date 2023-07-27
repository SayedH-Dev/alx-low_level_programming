#include "lists.h"

/**
  * print_list - function that prints all elements of a linked list
  * @h: pointer to the head of a linked list
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t nodeNum;
	const list_t *start;

	nodeNum = 0;

	for (start = h ; start != NULL ; start = start->next)
	{
		if (start->str != NULL)
		{
			printf("[%u] %s\n", start->len, start->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
	}
	nodeNum++;
	return (nodeNum);
}
