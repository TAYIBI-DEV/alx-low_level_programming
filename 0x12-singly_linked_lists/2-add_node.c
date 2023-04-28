#include "lists.h"

/**
 * add_node - add node to the start of list
 * @head: addrss of pointer
 * @str: string
 *
 * Return: size
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_head;

	n_head = malloc(sizeof(list_t));
	if (!head || !n_head)
		return (NULL);
	if (str)
	{
		n_head->str = strdup(str);
		if (!n_head->str)
		{
			free(n_head);
			return (NULL);
		}
		n_head->len = strlen(n_head->str);
	}
	n_head->next = *head;
	*head = n_head;
	return (n_head);
}
