#include "lists.h"

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

