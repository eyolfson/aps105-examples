#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdbool.h>

typedef struct linked_list linked_list_t;
typedef struct node node_t;

linked_list_t *linked_list_create();
void linked_list_free(linked_list_t *linked_list);
bool linked_list_empty(linked_list_t *linked_list);
int linked_list_length(linked_list_t *linked_list);
void linked_list_print(linked_list_t *linked_list);

void linked_list_insert_front(linked_list_t *linked_list, int val);
int linked_list_remove_front(linked_list_t *linked_list);

bool linked_list_contains(linked_list_t *linked_list, int val);
bool linked_list_remove_first(linked_list_t *linked_list, int val);
int linked_list_remove_all(linked_list_t *linked_list, int val);

#endif
