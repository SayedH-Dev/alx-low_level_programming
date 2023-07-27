#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a linked
 * list
 * @head: pointer to a pointer to the head of linked list
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (str == NULL)
		return (NULL);

	newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = (*head);
	(*head) = newNode;

	return (newNode);
}

