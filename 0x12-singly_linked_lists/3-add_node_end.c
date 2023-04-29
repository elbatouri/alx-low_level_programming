#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add a node to the end of a list
 * @head: the beginning of the list
 * @str: string to add to node
 * Return: the adress to the head
 */
	list_t *add_node_end(list_t **head, const char *str)
	{
	char *dupstr;
	int len;

	list_t *newList, *oldList;

	newList = malloc(sizeof(list_t));
	if (newList == NULL)
		return (NULL);

	dupstr = strdup(str);

	if (str == NULL)
	{
		free(newList);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	newList->str = dupstr;
	newList->len = len;
	newList->next = NULL;

	if (*head == NULL)
		*head = newList;
	else
	{
		oldList = *head;
		while (oldList->next != NULL)
			oldList = oldList->next;
		oldList->next = newList;
	}
	return (*head);
	}

