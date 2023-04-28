#include "lists.h"

/**
 * free_list -  free nodes
 * @head: pointer
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node, *x_node;

	node = head;
	while (node)
	{
		x_node = node->next;
		free(node->str);
		free(node);
		node = x_node;
	}
}
