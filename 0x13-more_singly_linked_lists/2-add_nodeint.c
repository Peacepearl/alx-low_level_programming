#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: A pointer to the address of the head of the liistint_t  list
 * @n: The interger for the new node to contain.
 *
 * Return: If the function fails - NULL.
 * 	otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	return (new);
}
