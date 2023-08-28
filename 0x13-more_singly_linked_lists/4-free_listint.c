#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - good
 * @head: good
 */
void free_listint(listint_t *head)
{
	listint_t *c;

	while (head != NULL)
	{
		c = head;
		head = head->next;
		free(c);
	}
}

