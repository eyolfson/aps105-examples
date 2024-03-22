#include <stdio.h>
#include <stdlib.h>

typedef struct node node_t;

typedef struct node {
    int val;
    node_t *next;
} node_t;

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
    node_t n2 = {3, NULL};
    node_t n1 = {2, &n2};
    node_t n0 = {1, &n1};
    printList(&n0);
    return EXIT_SUCCESS;
}
