#include "linked-list.h"

int main(int argc, char *argv[]) {
  struct linked_list *l = linked_list_create();

  linked_list_print(l);

  for (int i = 0; i < 10; i++) {
    linked_list_insert(l, i);
  }

  linked_list_print(l);

  linked_list_destroy(l);

  return 0;
}
