#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - good
 * @head: good
 * @index: good
 * Return: (0)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *m, *t, *d;

	if (!*head || !head)
		return (-1);
	if (index == 0)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
		return (1);
	}
	m = *head;
	while (m != NULL && count < index - 1)
	{
		m = m->next;
		count++;
	}
	if (!m || !m->next)
		return (-1);
	d = m->next;
	m->next = d->next;
	free(d);
	return (1);
}

