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

void printList(linked_list_t *list) {
    node_t *current = list->head;
    printf("list:");
    while (current != NULL) {
        printf(" %d", current->val);
        current = current->next;
    }
    printf("\n");
}

int main(void) {
    node_t n3 = {4, NULL};
    node_t n2 = {3, &n3};
    node_t n1 = {2, &n2};
    node_t n0 = {1, &n1};
    linked_list_t list = {&n0};
    printList(&list);
    return EXIT_SUCCESS;
}
