#include "lists.h"

/**
  * print_listint - function that prints all elements in a linked list
  * @h: pointer to the linked list head
  * Return: no. of nodes in the linked list
  */
size_t print_listint(const listint_t *h)
{
	size_t nodeNum;
	const listint_t *start;

	nodeNum = 0;

	for (start = h ; start != NULL ; start = start->next)
	{
		printf("%d\n", start->n);

		nodeNum++;
	}
	return (nodeNum);
}



#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}
