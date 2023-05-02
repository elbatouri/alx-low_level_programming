#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - free a linked list.
 * @head: the linked list to frees
 *
 */

void free_listint(listint_t *head)
{
	listint_t *tempo;

	while (head)
	{
	tempo = head->next;
	free(head);
	head = tempo;
	}

}
