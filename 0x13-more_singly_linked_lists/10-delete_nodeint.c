#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node
 * @head: pointer to the first node
 * @index: index to the first node
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_temp, *next;
	unsigned int count;

	prev_temp = *head;

	if (index != 0)
	{
		for (count = 0; count < index - 1 && prev_temp != NULL; count++)
		{
			prev_temp = prev_temp->next;
		}
	}

	if (prev_temp == NULL || (prev_temp->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prev_temp->next;

	if (index != 0)
	{
		prev_temp->next = next->next;
		free(next);
	}
	else
	{
		free(prev_temp);
		*head = next;
	}
	return (1)
}
