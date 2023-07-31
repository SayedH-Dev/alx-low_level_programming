#include "lists.h"

/* to be executed before main */
void print_before_main() __attribute__((constructor));
/**
  * print_before_main - function that prints message before main execution
  * Return: void
  */
void print_before_main()
{
	list_t *head = NULL;

	add_node(&head, "You're beat! and yet, you must allow,");
	add_node(&head, "I bore my house upon my back!");

	free_list(head);
}


#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
    return (0);
}
