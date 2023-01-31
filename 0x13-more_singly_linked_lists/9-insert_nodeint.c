#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the start of the list
 * @idx: index to insert the node
 * @num: value of the new node
 * Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int num)
{
	listint_t *new_node, *temp;
	unsigned int count;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node = add_nodeint(head, num);
		return (new_node);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = num;
	temp = *head;
	count = 0;
	while (count < (idx - 1))
	{
		temp = temp->next;
		count++;
		if (temp == NULL)
			return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}

/**
 * add_nodeint - adds a new node at the start of the list
 * @head: pointer to the first element of the list
 * @n: num of filled list
 * Return: address of the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}
