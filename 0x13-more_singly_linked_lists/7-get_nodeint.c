#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *get_nodeint_at_index - good
 * @head: good
 * @index: good
 * Return: (0)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *m = head;

	while (m != NULL)
	{
		if (count == index)
			return (m);
		m = m->next;
		count++;
	}
	return (NULL);
}

