#include "lists.h"

/**
  * find_listint_loop - function that find a loop in a linked list
  * @head: pointer to the linked list head
  * Return: address of the starting node of the loop or NULL if failed
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sngl, *dbl;

	if (head == NULL || head->next == NULL)
		return (NULL);

	sngl = head;
	dbl = head;

	while (dbl != NULL && dbl->next != NULL)
	{
		sngl = sngl->next;
		dbl = dbl->next->next;
		if (sngl == dbl)
			break;
	}

	if (dbl == NULL || dbl->next == NULL)
		return (NULL);

	sngl = head;
	while (sngl != dbl)
	{
		sngl = sngl->next;
		dbl = dbl->next;
	}
	return (sngl);
}

