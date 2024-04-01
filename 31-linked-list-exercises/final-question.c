#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

typedef struct linked_list {
    node_t *head;
} linked_list_t;

typedef struct node {
    int val;
    node_t *next;
} node_t;

void reorder(linked_list_t *linked_list) {
    node_t *previous = NULL;
    node_t *current = linked_list->head;
    while (current != NULL) {
        if (current->val == 0) {
            if (previous != NULL) {
                node_t *next = current->next;
                current->next = linked_list->head;
                linked_list->head = current;
                previous->next = next;
                current = next;
                continue;
            }
        }
        previous = current;
        current = current->next;
    }
}

void exampleOne(void) {
    linked_list_t *linked_list = linked_list_create();
    linked_list_insert_front(linked_list, 10);
    linked_list_insert_front(linked_list, 13);
    linked_list_insert_front(linked_list, 0);
    linked_list_insert_front(linked_list, 0);
    linked_list_insert_front(linked_list, 15);
    linked_list_insert_front(linked_list, 0);
    linked_list_insert_front(linked_list, 0);
    printf("Example 1\n");
    printf("  Input ");
    linked_list_print(linked_list);
    reorder(linked_list);
    printf("  Output ");
    linked_list_print(linked_list);
    linked_list_free(linked_list);
}

void exampleTwo(void) {
    linked_list_t *linked_list = linked_list_create();
    linked_list_insert_front(linked_list, 0);
    linked_list_insert_front(linked_list, 5);
    linked_list_insert_front(linked_list, 0);
    linked_list_insert_front(linked_list, 0);
    linked_list_insert_front(linked_list, 19);
    linked_list_insert_front(linked_list, 0);
    linked_list_insert_front(linked_list, 1);
    printf("Example 2\n");
    printf("  Input ");
    linked_list_print(linked_list);
    reorder(linked_list);
    printf("  Output ");
    linked_list_print(linked_list);
    linked_list_free(linked_list);

}

int main(void) {
    exampleOne();
    exampleTwo();
    return EXIT_SUCCESS;
}
