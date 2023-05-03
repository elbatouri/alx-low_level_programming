#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * get_nodeint_at_index - eturns the nth node of a linked list
 * @head : pointer to the first node
 * @index : the index of the node to return
 *
 * Return: the node indexed or 0 if null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *temporary = head;

	while (temporary && i < index)
	{
		temporary = temporary->next;
		i++;
	}
	return (temporary ? temporary : NULL);
}
