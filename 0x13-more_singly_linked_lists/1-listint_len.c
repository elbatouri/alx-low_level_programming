#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer the first node of the list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{

size_t lenList = 0;

	while (h)
	{
		lenList++;
		h = h->next;
	}
	return (lenList);
}
