#include "lists.h"

/**
  * free_listint2 - function that frees the memory
  * allocated for a linked list
  * @head: pointer to a pointer to the linked list head
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *start, *nNode; /* next node */

	if (head == NULL)
		return;

	for (start = (*head) ; start != NULL ; )
	{
		nNode = start->next;

		free(start);
		start = nNode;
	}

	(*head) = NULL;
}

