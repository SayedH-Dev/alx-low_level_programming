#include "lists.h"

/**
  * print_listint - function that prints all elements in a linked list
  * @h: pointer to the linked list head
  * Return: no. of nodes in the linked list
  */
size_t print_listint(const listint_t *h)
{
	size_t nodeNum;
	const listint_t *start;

	nodeNum = 0;

	for (start = h ; start != NULL ; start = start->next)
	{
		printf("%d\n", start->n);
		nodeNum++;
	}
	return (nodeNum);
}
