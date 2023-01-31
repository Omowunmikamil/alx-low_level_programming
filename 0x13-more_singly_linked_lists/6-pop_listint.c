#include "list.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the first node in the list
 * Return:he head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	int fcopy;
	listint_t *temp, *next;

	if (*head == NULL)
		return (0);
	temp = *head;
	next = temp->next;
	fcopy = temp->n;
	free(temp);
	*head = next;
	return (fcopy);
}
