#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds
 * @head: node
 * @n: data
 * Return: node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last;

	last = malloc(sizeof(dlistint_t));
	if (last == NULL)
		return (NULL);
	last->n = n;
	last->next = NULL;
	if (*head == NULL)
	{
		last->prev = NULL;
		*head = last;
	}
	else
	{
		dlistint_t *current;

		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = last;
		last->prev = current;
	}
	return (last);
}
