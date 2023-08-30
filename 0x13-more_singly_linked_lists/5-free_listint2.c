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

	while (!head || !*head)
	{
		*head = (*head)->next;
		free(*head);
	}
	*head = NULL;
}

