#include <stdio.h>
#include <stdlib.h>

typedef struct vector {
    int *data;
    int length;
    int capacity;
} vector_t;

vector_t *vector_create(int length) {
    vector_t *vector = malloc(sizeof(vector_t));
    vector->data = malloc(length * sizeof(int));
    if (vector->data == NULL) {
        exit(EXIT_FAILURE);
    }
    vector->length = length;
    vector->capacity = length;
    return vector;
}

void vector_resize(vector_t *vector, int new_length) {
    if (new_length <= vector->capacity) {
        vector->length = new_length;
    }
    else {
        vector->data = realloc(vector->data, new_length * sizeof(int));
        if (vector->data == NULL) {
            exit(EXIT_FAILURE);
        }
        vector->length = new_length;
        vector->capacity = new_length;
    }
}

void vector_print(vector_t *vector) {
    printf("vector:");
    for (int i = 0; i < vector->length; ++i) {
        printf(" %d", vector->data[i]);
    }
    printf("\n");
}

int main(void) {
    vector_t *vector = vector_create(4);
    for (int i = 0; i < vector->length; ++i) {
        vector->data[i] = i + 1;
    }
    vector_print(vector);
    vector_resize(vector, 7);
    vector_print(vector);
    vector_resize(vector, 3);
    vector_print(vector);
    return EXIT_SUCCESS;
}
