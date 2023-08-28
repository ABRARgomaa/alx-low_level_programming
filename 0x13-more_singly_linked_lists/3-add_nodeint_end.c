#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_nodeint_end - good
 * @head: good
 * @n: good
 * Return: (0)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *m;

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		m = *head;
		while (m->next != NULL)
		{
			m = m->next;
		}
		m->next = node;
	}
	return (node);
}

