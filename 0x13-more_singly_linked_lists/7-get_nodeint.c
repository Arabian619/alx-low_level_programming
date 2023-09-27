#include "lists.h"

/**
 * get_nodeint_at_index - returns node at a certain index in linked list
 * @head: First node in linked list
 * @index: Index of node to return
 *
 * Return: Pointer to node being searched for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
