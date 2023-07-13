#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the list
 * Return: Nothing
*/
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
