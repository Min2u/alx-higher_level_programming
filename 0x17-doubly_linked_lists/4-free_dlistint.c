#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
 * free_dlistint - to frees a dlistint_t list.
 *
 * @head: head of the list
 * Return: nothing.
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
