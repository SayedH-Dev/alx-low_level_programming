#include "lists.h"

/**
  * print_list - function that prints all elements of a linked list
  * @h: pointer to the head of a linked list
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t nodeNum;
	const list_t *start;

	nodeNum = 0;

	for (start = h ; start != NULL ; start = start->next)
	{
		if (start->str != NULL)
		{
			printf("[%u] %s\n", start->len, start->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		nodeNum++;
	}
	return (nodeNum);
}

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

/**
  * free_list - function that frees the memory allocated for a linke list
  * @head: pointer to the linked list head
  * Return: void
  */
void free_list(list_t *head)
{
	list_t *start, *temp;

	for (start = head ; start != NULL ; )
	{
		temp = start;
		start = start->next;

		free(temp->str);
		free(temp);
	}
}

