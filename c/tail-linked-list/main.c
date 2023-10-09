#include "tail-linked-list.h"

int main(int argc, char *argv[]) {
  struct tail_linked_list *l = tail_linked_list_create();

  tail_linked_list_print(l);

  for (int i = 0; i < 10; i++) {
    tail_linked_list_insert_first(l, i);
  }

  for (int i = 10; i < 20; i++) {
    tail_linked_list_insert_last(l, i);
  }

  tail_linked_list_print(l);

  tail_linked_list_destroy(l);

  return 0;
}
