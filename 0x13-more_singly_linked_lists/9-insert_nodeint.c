#include "lists.h"

/**
  * insert_nodeint_at_index - function that insert
  * a new node at a given position
  * @idx: index to insert the new node
  * @head: pointer to the linked list head
  * @n: value to be stored in the new node
  * Return: address to the new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *start;
	unsigned int x;

	start = *head;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = (*head);
		(*head) = newNode;
		return (newNode);
	}

	for (x = 0 ; x < idx - 1 && start != NULL ; x++)
	{
		start = start->next;
	}

	if (start == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = start->next;
	start->next = newNode;

	return (newNode);
}

