#include "lists.h"

/**
 * free_listint - function that free listint
 * @head: pointer
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *free_node;

	while (head)
	{
		free_node = head;
		head = head->next;
		free(free_node);
	}
}
