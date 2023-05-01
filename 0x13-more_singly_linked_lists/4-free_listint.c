#include "lists.h"
/**
 * free_listint - function
 * @head: pointer to the list
 * Return: nothing
 * Description: frees memory from a list
 **/
void free_listint(listint_t *head)
{
listint_t *current, *next;

current = head;
while (current)
{
next = current->next;
free(current);
current = next;
}
}
