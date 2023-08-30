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

	while (!head || !*head)
	{
		*head = (*head)->next;
		m = *head->next;
		free(*head);
	}
	*head = NULL;
}

