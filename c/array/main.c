#include "array.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
  struct array *a = array_create(10);

  array_print(a);

  for (int i = 0; i < 10; i++) {
    array_set(a, i, i);
  }

  array_print(a);

  array_destroy(a);

  return 0;
}
