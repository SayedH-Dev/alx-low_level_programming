#include "lists.h"

/**
  * dlistint_len - a function that returns
  * no. of elements in a doubly linked list
  * @h: pointer to the list head
  * Return: no. of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;

	counter = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
