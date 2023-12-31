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

	if (head == NULL)
		return (0);

	start = head;
	nodeNum = 0;

	while (start)
	{
		printf("[%p] %d\n", (void *)start, start->n);
		nodeNum++;

		if ((void *)start <= (void *)start->next)
		{
			printf("-> [%p] %d\n", (void *)start->next,
					start->next ? start->next->n : 0);
			nodeNum++;
			exit(98);
		}
		start = start->next;
	}
	if (nodeNum == 0)
		printf("(nil)\n");

	return (nodeNum);
}

