#include "lists.h"

/**
  * print_dlistint - a function that prints all the elements of a list
  * @h: pointer to the list head
  * Return: no. of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter;

	counter = 0;

	if (h == NULL)
		return (NULL);

	while (h != NULL)
	{
		printf("%d\n", h->data);
		h = h->next;
		counter++;
	}
	return (counter);
}
