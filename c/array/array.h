#ifndef ARRAY_H
#define ARRAY_H

struct array {
  int *data;
  int size;
};

struct array *array_create(int size);
void array_destroy(struct array *arr);
void array_set(struct array *arr, int index, int value);
int array_get(struct array *arr, int index);
void array_print(struct array *arr);

#endif
