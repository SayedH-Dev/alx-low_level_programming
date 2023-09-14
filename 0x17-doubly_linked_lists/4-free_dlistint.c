#include "lists.h"

/**
  * free_dlistint -  a function that frees a list
  * @head: pointer to the list head
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node;

	while (head != NULL)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}
}
