#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *run = head;

	if (!head)
		return (NULL);

	while (slow && run && run->next)
	{
		run = run->next->next;
		slow = slow->next;
		if (run == slow)
		{
			slow = head;
			while (slow != run)
			{
				slow = slow->next;
				run = run->next;
			}
			return (run);
		}
	}

	return (NULL);
}
