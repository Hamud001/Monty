#include "monty.h"
/**
  *f_rotl- rotates the stack to the apex
  *@head: head of the stack
  *@counter: line_number
  *Return: no return
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *dupe;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	dupe = (*head)->next;
	dupe->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = dupe;
}
