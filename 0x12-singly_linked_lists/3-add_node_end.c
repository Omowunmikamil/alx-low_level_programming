#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of the linked list.
 * @str: string to be stored in the list.
 * Return: address of the head.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;
	size_t ncha;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (ncha = 0; str[ncha]; ncha++)
		;

	newnode->len = ncha;
	newnode->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	return (*head);
}
