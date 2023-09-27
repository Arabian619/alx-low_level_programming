#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of linked list
 * @head: Pointer to first node in list
 * @n: Data to insert in new node
 *
 * Return: Pointer to new node, or NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
