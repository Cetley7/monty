#include "monty.h"

/**
 * release_stack - Deallocate a doubly linked list
 * @head: The first node of the stack
 * Return: None
 */


void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

/**
 * clear_stack - Free the stack
 * @head: The first node (unused)
 * @counter: Line counter (unused)
 *
 * Return: None
 */

void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;

	bus.lifi = 0;
}
