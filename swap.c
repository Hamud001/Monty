#include "monty.h"
/**
 * f_swap - adds the top two elements of the stack.
 * @head: head of the stack
 * @counter: line_number
 * Return: no return
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *i;
	int len = 0, dupe;

	i = *head;
	while (i)
	{
		i = i->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	dupe = i->n;
	i->n = i->next->n;
	i->next->n = dupe;
}

