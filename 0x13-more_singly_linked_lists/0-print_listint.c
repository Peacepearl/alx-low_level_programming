#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all elements of a linked list
 * @h: linked list of type list_t to print
 *
 * return:number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n)
		num++;
		h = hh->next;
	}
	return(num)
}
