#include "lists.h"

/**
  * add_nodeint - function that adds a new node at the beginning of a linked
  * list
  * @head: pointer to a pointer to the head of linked list
  * @n: integer to be added
  * Return: address of the new element, or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = (*head);
	(*head) = newNode;

	return (newNode);
}

