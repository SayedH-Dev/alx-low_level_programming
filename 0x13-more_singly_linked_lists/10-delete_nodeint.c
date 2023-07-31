#include "lists.h"

/**
  * delete_nodeint_at_index - function that deletes a node in a linked list
  * at a specific given index
  * @head: pointer to head of the linked list
  * @index: index of the node to be deleted.
  * Return: 1 if succeeded or -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *now, *prev, *temp;
	unsigned int x;

	now = *head;
	prev = NULL;

	if ((*head) == NULL || now == NULL)
		return (-1);

	if (index == 0)
	{
		temp = (*head);
		(*head) = (*head)->next;
		free(temp);
		return (1);
	}

	for (x = 0 ; x < index && now != NULL ; x++)
	{
		prev = now;
		now = now->next;
	}

	if (now == NULL)
		return (-1);

	prev->next = now->next;
	free(now);
	return (1);
}

