#include "lists.h"

/**
  * sum_dlistint - a function that sums the data of a doubly linked list
  * @head: pointer to the linked list head
  * Return: sum of the data or 0 if empty list
  */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
