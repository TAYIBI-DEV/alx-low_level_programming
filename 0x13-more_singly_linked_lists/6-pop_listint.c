#include "lists.h"

/**
 * pop_listint - function delete the head
 * @head: pointer
 * Return: head
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head)
		return (0);

	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}
