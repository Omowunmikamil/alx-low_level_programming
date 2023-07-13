#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the begining of the string
 * Return: Nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;
	current = *head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
