#include <stdbool.h>
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

node_t **findIndirect(linked_list_t *linked_list, node_t *target) {
    node_t **p = &linked_list->head;
    while (*p != target) {
        p = &(*p)->next;
    }
    return p;
}

void removeNode(linked_list_t *linked_list, node_t *node) {
    node_t **p = findIndirect(linked_list, node);
    *p = node->next;
    node->next = NULL;
}

bool isEmpty(linked_list_t *linked_list) {
    return linked_list->head == NULL;
}

int length(linked_list_t *linked_list) {
    int len = 0;
    node_t *current = linked_list->head;
    while (current != NULL) {
        len += 1;
        current = current->next;
    }
    return len;
}

void insertBefore(linked_list_t *linked_list, node_t *before, node_t *node) {
    node_t **p = findIndirect(linked_list, before);
    *p = node;
    node->next = before;
}

void insertAfter(node_t *after, node_t *node) {
    node->next = after->next;
    after->next = node;
}

void insertEnd(linked_list_t *linked_list, node_t *node) {
    insertBefore(linked_list, NULL, node);
}

node_t *insertFront(linked_list_t *linked_list, int val) {
    node_t *node = createNode(val);
    node->next = linked_list->head;
    linked_list->head = node;
    return node;
}

node_t *insertBack(linked_list_t *linked_list, int val) {
    node_t *node = createNode(val);
    insertEnd(linked_list, node);
    return node;
}

node_t *removeFront(linked_list_t *linked_list) {
    node_t *node = linked_list->head;
    if (node != NULL) {
        linked_list->head = node->next;
    }
    return node;
}

int main(void) {
    linked_list_t *linked_list = createLinkedList();
    insertFront(linked_list, 4);
    insertFront(linked_list, 3);
    insertFront(linked_list, 2);
    insertFront(linked_list, 1);
    printLinkedList(linked_list);
    node_t *n = removeFront(linked_list);
    insertEnd(linked_list, n);
    printLinkedList(linked_list);
    freeLinkedList(linked_list);
    return EXIT_SUCCESS;
}
