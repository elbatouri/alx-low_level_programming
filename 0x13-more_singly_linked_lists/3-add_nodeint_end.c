#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add a node in the end of a list
 * @head: pointer to the first element of the list
 * @n: data to enter in the node
 *
 * Return: Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tempo = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	return (new);
	}

	while (tempo->next)
	tempo = tempo->next;
	tempo->next = new;

		return (new);
}
