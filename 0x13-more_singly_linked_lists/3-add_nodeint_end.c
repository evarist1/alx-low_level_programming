#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ne_w;
	listint_t *temp = *head;

	ne_w = malloc(sizeof(listint_t));
	if (!ne_w)
		return (NULL);
	ne_w->n = n;
	ne_w->next = NULL;

	if (*head == NULL)
	{
		*head = ne_w;
		return (ne_w);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = ne_w;
	return (ne_w);
}
