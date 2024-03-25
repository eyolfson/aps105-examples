#include <stdio.h>
#include <stdlib.h>

typedef struct node node_t;

typedef struct node {
    int val;
    node_t *next;
} node_t;

void removeNode(node_t *head, node_t *target) {
    node_t *cur = head->next;
    node_t *prev = NULL;

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

int main(void) {
    node_t n4 = {4, NULL};
    node_t n3 = {3, &n4};
    node_t n2 = {2, &n3};
    node_t n1 = {1, &n2};
    node_t *head = &n1;
    printList(head);
    return EXIT_SUCCESS;
}
