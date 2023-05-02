#include "lists.h"

/**
 * get_nodeint_at_index - fuction returns the nth node
 * @head: poiter
 * @index: index of node
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int n;

	temp = head;
	n = 0;

	while (temp && n < index)
	{
		temp = temp->next;
		n++;
	}
	return (temp);
}
