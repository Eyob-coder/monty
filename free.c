#include "monty.h"
/**
 * free_z - frees memory
 * @st : string
 */
void free_z(stack_t *st)
{
	stack_t *x = NULL;

	while (st)
	{
		x = st->next;
		free(st);
		st = x;
	}
}
