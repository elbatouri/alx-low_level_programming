#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - return
 * @h: linked list
 *
 *Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t numberOfNodes = 0;

	while (h)
	{
	h = h->next;
	numberOfNodes++;
	}
	return (numberOfNodes);
}
