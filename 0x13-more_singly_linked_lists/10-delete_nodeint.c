#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node
 * @head: pointer to the first node
 * @index: index to the first node
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *next;
	unsigned int count;

	prev = *head;

	if (index != 0)
	{
		for (count = 0; count < index - 1 && prev != NULL; count++)
		{
			prev = prev->next;
		}
	}

	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}
	return (1)
}
