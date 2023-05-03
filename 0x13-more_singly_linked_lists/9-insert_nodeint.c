#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node in specific position
 * @head:the first node of a linked list
 * @idx: position where to add node
 * @n: the dat aof the node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temporary = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; temporary && i < idx; i++)
	{
	if (i == idx - 1)
	{
		new->next = temporary->next;
		temporary->next = new;
		return (new);
	}
	else
		temporary = temporary->next;
	}
	return (NULL);
}
