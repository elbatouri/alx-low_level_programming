#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct singlyList - singly linked list
 * @str: the string to allocat a memry to
 * @len : the number of char
 * @next: pointer to next node
 */


typedef struct singlyList
{
	char *str;
	unsigned int len;
	struct singlyList *next;
} list_t;


size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif

