#include "lists.h"

/**
 * add_nodeint_end - function that add node in the end of list
 * @head: pointer
 * @n: int
 * Return: pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	temp = *head;

	if (!newnode)
		return (NULL);

	newnode->next = NULL;
	newnode->n = n;

	if (*head == NULL)
		*head = newnode;
	else
	{
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	}
	return (newnode);
}


