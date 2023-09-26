#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: the head node’s data (n) and 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (data);
}
