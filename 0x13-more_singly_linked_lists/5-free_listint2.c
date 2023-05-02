#include "lists.h"

/**
 * free_listint2 - function free a listint
 * @head: pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *newnode;

	newnode = *head;
	while (newnode)
	{
		temp = newnode;
		newnode = newnode->next;
		free(temp);
	}
	*head = NULL;
}


