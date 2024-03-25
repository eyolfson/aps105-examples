#include <stdio.h>
#include <stdlib.h>

typedef struct node node_t;

typedef struct node {
    int val;
    node_t *next;
} node_t;

node_t *createNode(int val) {
    node_t *node = malloc(sizeof(node_t));
    if (node == NULL) {
        exit(EXIT_FAILURE);
    }
    node->val = val;
    node->next = NULL;
    return node;
}

void printList(node_t *head) {
    node_t *current = head;
    printf("list:");
    while (current != NULL) {
        printf(" %d", current->val);
        current = current->next;
    }
    printf("\n");
}

node_t *insertFront(node_t *head, int val) {
    node_t *node = createNode(val);
    node->next = head;
    head = node;
    return node;
}

int main(void) {
    node_t *head = NULL;
    insertFront(head, 4);
    printList(head);
    return EXIT_SUCCESS;
}
