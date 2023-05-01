#include "lists.h"

/**
 * print_listint - function print all element listint_t
 * @h: pointer
 * Return: numbr of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
