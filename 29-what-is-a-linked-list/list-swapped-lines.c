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

node_t *createNode(int val) {
    node_t *node = malloc(sizeof(node_t));
    if (node == NULL) {
        exit(EXIT_FAILURE);
    }
    node->val = val;
    node->next = NULL;
    return node;
}

void printList(linked_list_t *linked_list) {
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
    linked_list->head = node;
    node->next = linked_list->head;
    return node;
}

int main(void) {
    linked_list_t *linked_list = createLinkedList();
    node_t *n4 = insertFront(linked_list, 4);
    node_t *n3 = insertFront(linked_list, 3);
    printList(linked_list);
    free(n3);
    free(n4);
    free(linked_list);
    return EXIT_SUCCESS;
}
