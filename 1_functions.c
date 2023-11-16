#include "monty.h"

/**
 * f_pop - Removes the top node from the stack.
 * @head: Pointer to pointer of the first node.
 * @counter: Line counter.
 *
 * Returns: None.
 */

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;
	*head = h->next;
	free(h);
}

/**
 * f_pint - Prints the value of the top node on the stack.
 * @head: Pointer to pointer of the first node.
 * @counter: Line counter.
 *
 * Returns: None.
 */

void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}

/**
 * f_nop - Does nothing.
 * @head: Pointer to pointer of the first node.
 * @counter: Line counter.
 *
 * Returns: None.
 */

void f_nop(stack_t **head, unsigned int counter)
{
	(void) counter;
	(void) head;
}

