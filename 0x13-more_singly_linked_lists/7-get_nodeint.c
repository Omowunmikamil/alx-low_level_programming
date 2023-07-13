#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the first element in the list
 * @index: tne index of the list
 * Return: nth element
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (count < index)
	{
		temp = temp->next;
		count++;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
