#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - good
 * @head: good
 */
void free_listint2(listint_t **head)
{
	listint_t *m;

	while (*head != NULL)
	{
		m = *head;
		*head = (*head)->next;
		free(m);
	}
	*head = NULL;
}

