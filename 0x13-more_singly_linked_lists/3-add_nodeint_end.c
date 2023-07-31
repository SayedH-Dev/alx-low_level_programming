#include "lists.h"

/**
  * add_nodeint_end - function that adds a new node at the end of
  * a linked list
  *
  * @head: pointer to a pointer to the head of linked list
  * @n: integer to be added at the end of the list
  * Return: address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *start;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		for (start = *head ; start->next != NULL ; start = start->next)
		{
		}
		start->next = newNode;
	}
	return (newNode);
}

