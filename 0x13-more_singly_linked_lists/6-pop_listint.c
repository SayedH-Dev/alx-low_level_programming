#include "lists.h"

/**
  * pop_listint - function that deletes the head node of a linked list
  * and returns the head node's data
  * @head: pointer to a pointer to the linked list head
  * Return: data of the deleted head node or 0 if the linked list is empty
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int headData;

	if (*head == NULL)
		return (0);

	headData = (*head)->n;

	temp = *head;
	(*head) = (*head)->next;
	free(temp);

	return (headData);
}

