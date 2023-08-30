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
		free(*head);
		*head = (*head)->next;
	}
	*head = NULL;
}

