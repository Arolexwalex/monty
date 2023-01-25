#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
.git/stack_t *h;
.git/(void)counter;

.git/h = *head;
.git/if (h == NULL)
.git/return;
.git/while (h)
.git/{
.git/printf("%d\n", h->n);
.git/h = h->next;
.git/}
}
