#ifndef _SORTING_ALGOS_H_
#define _SORTING_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index node list
 * @next: Pointer next node
 *
 * Description: singly linked list structure
 * for Holbert
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list
 *
 * @n: Integer
 * @index: Index node list
 * @next: Pointer next node
 * @express: Pointer next node lane
 *
 * Description: singly linked list node structure with an express lane
 * for Holbert
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int search_array(int *array, size_t size, int value);
int sort_search(int *array, size_t size, int value);
int jump_value(int *array, size_t size, int value);
int interpolation_algorithm(int *array, size_t size, int value);
int exponential_sort(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_array(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
