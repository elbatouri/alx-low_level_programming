#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - free a linked list and set head to null
 * @head: pointer to the list to frees
 */

void free_listint2(listint_t **head)
{
	listint_t *tempo;

	if (head == NULL)
		return;
	while (*head)
	{
		tempo = (*head)->next;
		free(*head);
		*head = tempo;
	}
		*head = NULL;
}
