#include "lists.h"

/**
  * print_list - function that prints all elements of a linked list
  * @h: pointer to the head of a linked list
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t nodeNum;
	const list_t *start;

	nodeNum = 0;

	for (start = h ; start != NULL ; start = start->next)
	{
		if (start->str != NULL)
		{
			printf("%u %s\n", start->len, start->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
	}
	nodeNum++;
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
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}
