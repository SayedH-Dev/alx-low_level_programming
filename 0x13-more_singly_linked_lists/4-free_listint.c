#include "lists.h"

/**
  * free_listint - function that frees the memory
  * allocated for a linked list
  * @head: pointer to the linked list head
  * Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *start, *temp;

	for (start = head ; start != NULL ; )
	{
		temp = start;
		start = start->next;

		free(temp);
	}
}

