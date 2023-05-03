#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - the sum of all the data (n) of a linked lists
 * @head : the fist node of the linked list
 *
 * Return: the sum of numb in two linked list
 */

int sum_listint(listint_t *head)
{
	listint_t *temporary = head;
	int sum = 0;

	while (temporary)
	{
		sum += temporary->n;
		temporary = temporary->next;
	}
	return (sum);
}
