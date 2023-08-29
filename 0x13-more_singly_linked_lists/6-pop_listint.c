#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - good
 * @head: good
 * Return: (0)
 */
int pop_listint(listint_t **head)
{
	int data = (*head)->n;
	listint_t *m = *head;

	if (*head == NULL)
		return (0);
	*head = (*head)->next;
	free(m);
	return (data);
}

