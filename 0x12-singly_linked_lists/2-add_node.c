#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of the linked link.
 * @str: string to be stored in the list.
 * Return: address of the head.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t ncha;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (ncha = 0; str[ncha]; ncha++)
		;
	newnode->len = ncha;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
