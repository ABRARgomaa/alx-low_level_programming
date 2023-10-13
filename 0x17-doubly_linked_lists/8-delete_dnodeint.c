#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - fun
 * @head: node
 * @index: indx
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *current, *previ;

	count = 0;
	if (*head == NULL)
		return (-1);
	current = *head;
	count = 0;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (current != NULL && count < index)
	{
		previ = current;
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (-1);

	previ->next = current->next;
	if (current->next != NULL)
		current->next->prev = previ;
	free(current);
	return (1);
}
