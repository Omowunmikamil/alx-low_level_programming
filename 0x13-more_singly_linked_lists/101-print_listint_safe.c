#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head:head of the list
 * Return: Nothing
*/
void free_listp(listp_t **head)
{
	listp_t *temp, *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: head of the list
 * Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *headptr, *new, *sumup;

	headptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = headptr;
		headptr = new;

		sumup = headptr;
		while (sumup->next != NULL)
		{
			sumup = sumup->next;
			if (head == sumup->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&headptr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}
	free_listp(&headptr);
	return (nnodes);
}
