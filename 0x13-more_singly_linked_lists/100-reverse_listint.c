#include "lists.h"

/**
  * reverse_listint - function that reverse a linked list
  * @head: pointer to a pointer to linked list head
  * Return: pointer to reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pos, *prev;

	pos = (*head);
	prev = NULL;

	while (pos != NULL)
	{
		pos = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = pos;
	}
	(*head) = prev;
	return (*head);
}

