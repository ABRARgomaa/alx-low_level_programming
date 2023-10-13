#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - gets node
 * @head: node
 * @index: indx
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *c;
	unsigned int i;

	c = head;
	for (i = 0; i < index && c != NULL; i++)
		c = c->next;
	return (c);
}
