#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Counts number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *cow, *lion;
	size_t pop = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	cow = head->next;
	lion = (head->next)->next;

	while (lion)
	{
		if (cow == lion)
		{
			cow = head;
			while (cow != lion)
			{
				pop++;
				cow = cow->next;
				lion = lion->next;
			}
			cow = cow->next;
			while (cow != lion)
			{
				pop++;
				cow = cow->next;
			}

			return (pop);
		}

		cow = cow->next;
		lion = (lion->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t pop, serial = 0;

	pop = looped_listint_len(head);

	if (pop == 0)
	{
		for (; head != NULL; pop++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (serial = 0; serial < pop; serial++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (pop);
}
