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

	if (!*head || !head)
		return (0);
	data = (*head)->n;
	*head = (*head)->next;
	free(*head);
	return (data);
}

