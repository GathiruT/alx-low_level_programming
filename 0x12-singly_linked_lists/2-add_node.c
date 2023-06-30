#include "lists.h"

/**
 * _strlen - computes the length of a string
 *
 * @s: string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node - adds node to beginning of linked list
 *
 * @head: contains the first node address
 * @str: a string
 *
 * Return: address of the new element (success), NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *s = strdup(str);

	if (s == NULL || s == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = s;
	new_node->len = _strlen(s);

	if (head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	*head = new_node;

	return (new_node);
}
