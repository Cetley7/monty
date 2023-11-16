#include "monty.h"

/**
* f_pall - Prints all elements in the stack.
* @head: Pointer to pointer of the first node.
* @counter: Line counter (not used).
*
* Returns: None.
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

/**
* f_swap - Swaps the values of the first two elements in the stack.
* @head: Pointer to the first node.
* @counter: Line counter.
*
* Returns: None.
*/

void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int length = 0, temp;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	temp = h->n;
	h->n = h->next->n;
	h->next->n = temp;
}

