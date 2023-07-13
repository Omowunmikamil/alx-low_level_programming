#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the address of the list
 * Return:  the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int firstnode;

	if (!(*head))
		return (0);

	temp = *head;
	firstnode = temp->n;
	temp = temp->next;

	free(*head);
	*head = temp;

	return (firstnode);
}
