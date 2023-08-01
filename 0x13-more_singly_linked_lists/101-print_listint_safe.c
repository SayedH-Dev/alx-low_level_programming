#include "lists.h"
 
/**
  * add_nodeint - function that adds a new node at the beginning of a linked
  * list
  * @head: pointer to a pointer to the head of linked list
  * @n: integer to be added
  * Return: address of the new element, or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = (*head);
	(*head) = newNode;

	return (newNode);
}

#include "lists.h"

/**
  * free_listint - function that frees the memory
  * allocated for a linked list
  * @head: pointer to the linked list head
  * Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *start, *temp;

	for (start = head ; start != NULL ; )
	{
		temp = start;
		start = start->next;

		free(temp);
	}
}

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

/**
  * print_listint - function that prints all elements in a linked list
  * @h: pointer to the linked list head
  * Return: no. of nodes in the linked list
  */
size_t print_listint(const listint_t *h)
{
	size_t nodeNum = 0;
	const listint_t *start;

	if (h == NULL)
		return (0);

	for (start = h ; start != NULL ; start = start->next)
	{
		printf("%d\n", start->n);
		nodeNum++;
	}
	return (nodeNum);
}
