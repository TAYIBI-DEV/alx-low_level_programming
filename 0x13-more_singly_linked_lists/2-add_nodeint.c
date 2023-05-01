#include "lists.h"

/**
 * add_nodeint - function that adds node at the beginning
 * @head: pointer
 * @n: int
 * Return: pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);
	newnode->next = NULL;
	newnode->n = n;

	newnode->next = *head;
	*head = newnode;
		return (newnode);
}

