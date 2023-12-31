# include "lists.h"

/**
  * list_len - function that return the number of elements in a linked list
  * @h: pointer to the head of the linked list
  * Return: number of elements
  */
size_t list_len(const list_t *h)
{
	size_t nodeNum;

	nodeNum = 0;

	while (h)
	{
		nodeNum++;
		h = h->next;
	}
	return (nodeNum);
}

