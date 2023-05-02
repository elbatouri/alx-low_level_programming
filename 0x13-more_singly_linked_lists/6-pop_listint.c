#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the head of the linked list
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
listint_t *temporary;
int nodeData;

if (!head || !*head)
	return (0);
nodeData = (*head)->n;
temporary = (*head)->next;
free(*head);
*head = temporary;

return (nodeData);
}
