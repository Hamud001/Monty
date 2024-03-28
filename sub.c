 #include "monty.h"
/**
  *f_sub- substration
  *@head: head of the stack
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *dupe;
	int sus, nodes;

	dupe = *head;
	for (nodes = 0; dupe != NULL; nodes++)
		dupe = dupe->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	dupe = *head;
	sus = dupe->next->n - dupe->n;
	dupe->next->n = sus;
	*head = dupe->next;
	free(dupe);
}
