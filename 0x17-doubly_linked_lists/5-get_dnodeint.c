#include "lists.h"

/**
  * get_dnodeint_at_index - a function the nth node of a list
  * @head: pointer to the list head
  * @index: node index
  * Return: pointer to the nth node or NULL if doesn't exist
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter;

	counter = 0;

	while (head != NULL)
	{
		if (counter == index)
			return (head);
		head = head->next;
		counter++;
	}
	return (NULL);
}
