#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - mesures the length of sting
 * @s: string
 * Return: the length
 */

unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be duplicated into the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *temp;

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
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
	temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
