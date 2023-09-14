#include "lists.h"

/**
  * add_dnodeint - a function that add a new node in the beginning of a list
  * @head: pointer to pointer to the head
  * @n: node data
  * Return: address to the new node or NULL if failed
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = *head;
	if (*head != NULL)
		(*head)->prev = node;

	*head = node;
	return (node);
}
