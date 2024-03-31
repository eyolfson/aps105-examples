#include "linked_list.h"

#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list {
    node_t *head;
} linked_list_t;

typedef struct node {
    int val;
    node_t *next;
} node_t;

linked_list_t *linked_list_create() {
    linked_list_t *linked_list = malloc(sizeof(linked_list_t));
    if (linked_list == NULL) {
        exit(EXIT_FAILURE);
    }
    linked_list->head = NULL;
    return linked_list;
}

void linked_list_free(linked_list_t *linked_list) {
    node_t *current = linked_list->head;
    free(linked_list);
    while (current != NULL) {
        node_t *node = current;
        current = current->next;
        free(node);
    }
}

bool linked_list_empty(linked_list_t *linked_list) {
    return linked_list->head == NULL;
}

int linked_list_length(linked_list_t *linked_list) {
    int length = 0;
    node_t *current = linked_list->head;
    while (current != NULL) {
        length += 1;
        current = current->next;
    }
    return length;
}

void linked_list_print(linked_list_t *linked_list) {
    node_t *current = linked_list->head;
    printf("linked_list:");
    while (current != NULL) {
        printf(" %d", current->val);
        current = current->next;
    }
    printf("\n");
}

static node_t *node_create(int val) {
    node_t *node = malloc(sizeof(node_t));
    if (node == NULL) {
        exit(EXIT_FAILURE);
    }
    node->val = val;
    node->next = NULL;
    return node;
}

void linked_list_insert_front(linked_list_t *linked_list, int val) {
    node_t *node = node_create(val);
    node->next = linked_list->head;
    linked_list->head = node;
}

int linked_list_remove_front(linked_list_t *linked_list) {
    if (linked_list_empty(linked_list)) {
        exit(EXIT_FAILURE);
    }
    node_t *node = linked_list->head;
    linked_list->head = node->next;
    int val = node->val;
    free(node);
    return val;
}
