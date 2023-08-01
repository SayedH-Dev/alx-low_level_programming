#include "lists.h"

/**
  * free_listint_safe - function that frees a linked list
  * @h: pointer to a pointer to the linked list head
  * Return: no. of nodes that was freed
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *start, *temp;
	size_t nodeNum;

	if (!h || !*h)
		return (0);

	start = *h;
	nodeNum = 0;

	while (start)
	{
		if ((void *)start <= (void *)start->next)
		{
			nodeNum++;
			break;
		}

		temp = start;
		start = start->next;
		free(temp);
		nodeNum++;
	}
	*h = NULL;
	return (nodeNum);
}

