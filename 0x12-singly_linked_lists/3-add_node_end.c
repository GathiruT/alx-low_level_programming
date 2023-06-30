#include "lists.h"

/**
 * _strlen - computes the length of a string
 *
 * @s: a string
 *
 * Return: length of the string
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
 * add_node_end - adds a new node at the end of a list
 *
 * @head: holds first node address
 * @str: string
 *
 * Return: address of the new element(success), NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;
	char *s = strdup(str);

	if (s == NULL || str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = s;
	new_node->len = _strlen(s);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (new_node);
}
