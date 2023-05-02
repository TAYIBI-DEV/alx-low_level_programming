#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: pointer
 * @idx: index of pos
 * @n: int data
 * Return: address
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int i = 0;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	temp = *head;

	if (!newnode || !head)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = temp;
		temp = newnode;
		return (newnode);
	}

	while (temp && i < idx)
	{
		if (i == idx - 1)
		{
		newnode->next =  temp->next;
		temp->next = newnode;
		i++;
		}
		return (newnode);
	}
	return (NULL);
}



