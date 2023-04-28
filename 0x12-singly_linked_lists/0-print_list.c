#include "lists.h"

/**
 * print_list - prints a linked lists
 * @h: pointer
 * Return: the nmbr of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	int len = strlen(h->str);

	while (h)
	{
		printf("[%d] %s\n", len, h->str ? h->str : "(nil)");
			h = h->next;
			i++;
	}
	return (i);
}
