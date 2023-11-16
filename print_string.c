#include "monty.h"

/**
 * f_pstr - Output the string at the top of the stack
 * @head: Pointer to the first node of the linked list
 * @counter: Line number counter
 *
 * Return: No specific return value
 */


void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
