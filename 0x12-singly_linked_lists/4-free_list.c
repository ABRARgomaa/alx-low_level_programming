#include <stdlib.h>
#include "lists.h"
/**
 * free_list - good
 * @head: good
 */
void free_list(list_t *head)
{
	list_t *f;

	while (head != NULL)
	{
		f = head;
		head = head->next;
		free(f->str);
		free(f);
	}
}

