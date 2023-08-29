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
	int data;
	listint_t *m;

	if (!*head || !head)
		return (0);
	data = (*head)->n;
	m = (*head)->next;
	free(*head);
	*head = m;
	return (data);
}

