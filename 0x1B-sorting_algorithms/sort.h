#ifndef _SORT_H_
#define _SORT_H_

#include <stddef.h>

/**
* struct listint_s - Doubly linked list node
*
* @n: Integer stored in the node
* @prev: Pointer to the previous element of the list
* @next: Pointer to the next element of the list
*/
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void check(listint_t *temp, listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

/**void lquick(int *array, size_t size, size_t start, size_t end);*/
/**int partition(int *array, size_t size, size_t start, size_t pivot);*/
/**void swap(int *i, int *j);*/


#endif
