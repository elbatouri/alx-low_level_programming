#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: pointer to the first node
 *
 * Return: the size of list.
 *
 */

	size_t print_list(const list_t *h)
	{
	size_t nmbersOfNodes = 0;

	while (h)
	{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("%d %s\n", h->len, h->str);

	h = h->next;
	nmbersOfNodes++;
	}
	return (nmbersOfNodes);
	}

