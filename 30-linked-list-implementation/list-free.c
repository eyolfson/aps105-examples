#include <stdio.h>
#include <stdlib.h>

typedef struct node node_t;

typedef struct node {
    int val;
    node_t *next;
} node_t;

typedef struct linked_list {
    node_t *head;
} linked_list_t;

linked_list_t *createLinkedList() {
    linked_list_t *linked_list = malloc(sizeof(linked_list_t));
    if (linked_list == NULL) {
        exit(EXIT_FAILURE);
    }
    linked_list->head = NULL;
    return linked_list;
}

void freeLinkedList(linked_list_t *linked_list) {
    node_t *current = linked_list->head;
    free(linked_list);
    while (current != NULL) {
        node_t *node = current;
        current = current->next;
        free(node);
    }
}

node_t *createNode(int val) {
    node_t *node = malloc(sizeof(node_t));
    if (node == NULL) {
        exit(EXIT_FAILURE);
    }
    node->val = val;
    node->next = NULL;
    return node;
}

void printLinkedList(linked_list_t *linked_list) {
    node_t *current = linked_list->head;
    printf("list:");
    while (current != NULL) {
        printf(" %d", current->val);
        current = current->next;
    }
    printf("\n");
}

node_t *insertFront(linked_list_t *linked_list, int val) {
    node_t *node = createNode(val);
    node->next = linked_list->head;
    linked_list->head = node;
    return node;
}

int main(void) {
    linked_list_t *linked_list = createLinkedList();
    insertFront(linked_list, 4);
    insertFront(linked_list, 3);
    insertFront(linked_list, 2);
    insertFront(linked_list, 1);
    printLinkedList(linked_list);
    freeLinkedList(linked_list);
    return EXIT_SUCCESS;
}
