#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

int linked_list_sum(linked_list_t *linked_list) {
    if (linked_list_empty(linked_list)) {
        return 0;
    }
    while (linked_list_length(linked_list) != 1) {
        int a = linked_list_remove_front(linked_list);
        int b = linked_list_remove_front(linked_list);
        linked_list_insert_front(linked_list, a + b);
    }
    return linked_list_remove_front(linked_list);
}

int main(void) {
    linked_list_t *linked_list = linked_list_create();
    linked_list_insert_front(linked_list, 4);
    linked_list_insert_front(linked_list, 3);
    linked_list_insert_front(linked_list, 2);
    linked_list_insert_front(linked_list, 1);
    linked_list_print(linked_list);
    int sum = linked_list_sum(linked_list);
    printf("sum: %d\n", sum);
    linked_list_free(linked_list);
    return EXIT_SUCCESS;
}
