#include "lists.h"

/**
  * listint_len - function that return the number of elements
  * in a linked list
  * @h: pointer to the head of the linked list
  * Return: number of elements
  */

size_t listint_len(const listint_t *h)
{
	size_t nodeNum;
	const listint_t *start;

	nodeNum = 0;

	for (start = h ; start != NULL ; start = start->next)
	{
		nodeNum++;
	}
	return (nodeNum);
}

