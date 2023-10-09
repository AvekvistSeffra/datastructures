#include "array.h"
#include <stdio.h>
#include <stdlib.h>

struct array *array_create(int size) {
  struct array *a = (struct array *)malloc(sizeof(struct array));

  a->data = (int *)malloc(sizeof(int) * size);
  a->size = size;

  return a;
}

void array_destroy(struct array *a) {
  free(a->data);
  free(a);
}

void array_set(struct array *a, int index, int value) {
  if (index >= a->size) {
    fprintf(stderr, "ERROR: Index out of bounds\n");
    exit(EXIT_FAILURE);
  }

  *(a->data + index) = value;
}

int array_get(struct array *a, int index) {
  if (index >= a->size) {
    fprintf(stderr, "ERROR: Index out of bounds\n");
    exit(EXIT_FAILURE);
  }

  return *(a->data + index);
}

void array_print(struct array *a) {
  fprintf(stdout, "[ ");
  for (int i = 0; i < a->size - 1; i++) {
    fprintf(stdout, "%d, ", array_get(a, i));
  }
  fprintf(stdout, "%d ]\n", array_get(a, a->size - 1));
}
