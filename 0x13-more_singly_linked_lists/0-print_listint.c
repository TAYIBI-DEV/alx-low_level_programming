#include "lists.h"

/**
 * print_listint - function print all element listint_t
 * @h: pointer
 * Return: numbr of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
