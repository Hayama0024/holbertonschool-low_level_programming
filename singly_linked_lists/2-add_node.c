#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be duplicated into the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;
	while (s[len] != '\0')
		len++;
	return len;
}

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
