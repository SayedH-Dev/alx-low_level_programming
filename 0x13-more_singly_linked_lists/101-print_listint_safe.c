#include "lists.h"

/**
  * print_listint_safe - function that prints linked list
  * by going through it once
  * @head: pointer to the linked list head
  * Return: no. of nodes
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *start;
	size_t nodeNum;

	start = head;
	nodeNum = 0;

	for (start = head ; start != NULL ; start = start->next)
	{
		printf("[%p] %d\n", (void *)start, start->n);
		nodeNum++;
		if ((void *)start <= (void *)start->next)
		{
			printf("-> [%p] %d\n", (void *)start->next, start->next->n);
			nodeNum++;
			exit(98);
		}
	}
	return (nodeNum);
}

