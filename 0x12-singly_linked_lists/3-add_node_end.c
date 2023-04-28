#include "lists.h"

/**
 * add_node_end - adds nodes in the end
 * @head: addred p
 * @str: string
 * Return: size
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;
	list_t *node = *head;

	n_node = malloc(sizeof(list_t));

	if (!head || !n_node)
		return (NULL);
	if (str)
	{
		n_node->str = strdup(str);
		if (!n_node->str)
		{
			free(n_node);
			return (NULL);
		}
		n_node->len = strlen(n_node->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = n_node;
	}
	else
		*head = n_node;
	return (n_node);
}
