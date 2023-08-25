#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - good
 * @head: good
 */
void free_list(list_t *head)
{
	list_t *f = head;

	while (head != NULL)
	{
		head = head->next;
		free(f->str);
		free(f);
	}
}

