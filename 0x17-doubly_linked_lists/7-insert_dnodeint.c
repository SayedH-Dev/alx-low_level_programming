#include "lists.h"

/**
  * insert_dnodeint_at_index - function that
  * inserts a node at a given poition
  * @h: pointer to pointer to the list head
  * @idx: index where we have to add the new node
  * Return: address of the node or NULL if failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node, *node;
	unsigned int counter;

	counter = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (counter == idx && current_node == NULL)
		return (add_dnodeint_end(h, n));

	if (counter != idx)
		return (NULL);

	current_node = *h;
	prev = NULL;
	while(counter < idx && current_node != NULL)
	{
		prev = current_node;
		current_node = current_node->next;
		counter++;
	}

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = prev;
	node->next = current_node;
	prev->next = node;

	if (current_node != NULL)
		current_node->prev = node;

	return (node);
}
