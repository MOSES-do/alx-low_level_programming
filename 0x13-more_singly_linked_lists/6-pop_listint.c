#include "lists.h"

/**
 * pop_listint - Removes the head node of a list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *list;
	int chkRet;

	if (*head == NULL)
		return (0);

	list = *head;
	chkRet = (*head)->n;
	*head = (*head)->next;

	free(list);

	return (chkRet);
}
