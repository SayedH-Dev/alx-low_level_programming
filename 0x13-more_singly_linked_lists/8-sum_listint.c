#include "lists.h"

/**
  * sum_listint - function that return the sum of all
  * the data of a linked list
  * @head: pointer to the linked list head
  * Return: sum of data
  */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *start;

	sum = 0;

	for (start = head; start != NULL; start = start->next)
	{
		sum += start->n;
	}
	return (sum);
}

