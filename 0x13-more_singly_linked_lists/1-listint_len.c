#include "lists.h"

/**
 * listint_len - function return numbr of element linked
 * @h: pointer
 * Return: numbr of element
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
