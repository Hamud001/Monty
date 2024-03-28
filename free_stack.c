#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: Stack head
*/
void free_stack(stack_t *head)
{
	stack_t *dupe;

	dupe = head;
	while (head)
	{
		dupe = head->next;
		free(head);
		head = dupe;
	}
}
