#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h:pointer to the first node of the linked list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numNodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numNodes++;
		h = h->next;
	}
	return (numNodes);
}
