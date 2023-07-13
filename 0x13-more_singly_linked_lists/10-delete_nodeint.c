#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to the head of list
 * @index: index to the node that's to be deleted
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev, *temp;
	unsigned int x = 0;

	current = *head;
	prev = current;

	if ((*head) && index == 0)
	{
		*head = (*head)->next;
		free(prev);
		return (1);
	}

	while (current)
	{
		temp = current;
		if (x == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		current = current->next;
		prev = temp;
		x++;
	}
	return (-1);
}
