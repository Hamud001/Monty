#include "monty.h"
/**
 * f_add - adds the top two elements of the stack.
 * @head: head of the stack
 * @counter: line_number
 * Return: no return
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *i;
	int len = 0, aux;

	i = *head;
	while (i)
	{
		i = i->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	aux = i->n + i->next->n;
	i->next->n = aux;
	*head = i->next;
	free(i);
}
