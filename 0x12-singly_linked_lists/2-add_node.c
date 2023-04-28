#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - function return the lenght of a str
 * @s: the srting passed to func
 *
 * Return: the lentgh of string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - ad a new node to list's beginning
 * @head: beginnig of of the node
 * @str: the string to add
 *
 * Return: null if string is null,
 */

	list_t *add_node(list_t **head, const char *str)
	{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
	}
