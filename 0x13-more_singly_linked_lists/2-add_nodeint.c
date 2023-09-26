#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 * Return: pointer, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *brand;

	brand = malloc(sizeof(listint_t));

	if (!brand)
		return (NULL);

	brand->n = n;
	brand->next = *head;
	*head = brand;

	return (brand);
}
