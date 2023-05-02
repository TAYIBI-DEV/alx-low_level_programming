#include "lists.h"

/**
 * sum_listint - function return the sum of all data
 * @head: pointer
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
