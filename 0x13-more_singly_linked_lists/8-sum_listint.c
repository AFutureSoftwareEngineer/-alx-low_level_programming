#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - function
 * @head : pointer to the head of the list
 * Return: sum of all the data (n),
 *         or 0 - if the list is empty
 * Description: calculates the sum of all the data (n) of a linked list
 */
int sum_listint(listint_t *head)
{
int added;

added = 0;

while (head)
{
added += head->n;
head = head->next;
}
return (added);
}
