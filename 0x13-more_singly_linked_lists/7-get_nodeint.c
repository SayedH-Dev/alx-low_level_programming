#include "lists.h"

/**
  * get_nodeint_at_index - function that return the node no. of an index
  * of a linked list
  * @head: pointer to the linked list head
  * @index: desired index
  * Return: nth node at a given index or NULL if the index is out of range
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *start;
	unsigned int indexCount;

	indexCount = 0;

	for (start = head ; start != NULL ; start = start->next)
	{
		if (indexCount == index)
			return (start);

		indexCount++;
	}
	return (NULL);
}

