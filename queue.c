#include "monty.h"
/**
 * f_queue - prints the top of the stack
 * @head: head of the stack
 * @counter: line_number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: stack head
 * Return: no return
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *dupe;

	dupe = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (dupe)
	{
		while (dupe->next)
			dupe = dupe->next;
	}
	if (!dupe)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		dupe->next = new_node;
		new_node->prev = dupe;
	}
}
