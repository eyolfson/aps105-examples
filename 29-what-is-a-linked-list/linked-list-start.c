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
    node_t n4 = {4, NULL};
    node_t n3 = {3, &n4};
    node_t n2 = {2, &n3};
    node_t n1 = {1, &n2};
    linked_list_t list = {&n1};
    printList(&list);
    return EXIT_SUCCESS;
}
