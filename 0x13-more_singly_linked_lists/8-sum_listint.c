#include "lists.h"

/**
 * sum_listint - sum all the data (n) of a listint_t linked list.
 * @head: pointer to the first node int the list
 * Return: the sum of the element
*/
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
