#include "lists.h"

/**
 * list_len - get the len of linked list
 * @h: pointer
 * Return: int
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	for (i = 0; h; i++)
		h = h->next;

	return (i);
}
