#include "lists.h"

/**
  * add_node_end - function that adds a new node at the end of a linked list
  *
  * @head: pointer to a pointer to the head of linked list
  * @str: string
  * Return: address of the new element, or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *start;

	newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
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

