#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  * *add_node_end- add nodes to the end of list
  * @head: head of list
  * @str: str to copy
  *
  * Return: number of nodes
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;
	int i;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	return (last);
}
