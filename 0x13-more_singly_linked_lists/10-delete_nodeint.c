#include "lists.h"

/**
 * delete_nodeint_at_index - function that delete the node at index
 * @head: pointer
 * @index: index
 * Return: 1 success -1 failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t  *newnode, *temp = *head;
	unsigned int i = 0;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		temp =  temp->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || (!temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}

	newnode = temp->next;
	temp->next = newnode->next;
	free(newnode);

	return (1);
}

