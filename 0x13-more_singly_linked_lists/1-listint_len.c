#include "lists.h"
/**
 *listint_len - function
 *@h: pointer to the first element
 *Return: the number of elements
 *Description: returns the number of elements in
 *a linked list
 */
size_t listint_len(const listint_t *h)
{
size_t i = 0;

while (h)
{
h = h->next;
i++;
	}
return (i);
}
