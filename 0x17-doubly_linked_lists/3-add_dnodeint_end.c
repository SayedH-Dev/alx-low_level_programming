#include "lists.h"

/**
  * add_dnodeint_end - a function that add a new node at the end of a list
  * @head: pointer to pointer to the list head
  * @n: new node's data
  * Return: address of the new node or NULL if failed
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *tail;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = node;
		node->prev = tail;
	}
	return (node);
}
