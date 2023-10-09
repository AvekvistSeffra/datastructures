#include "node.h"

#ifndef TAIL_LINKED_LIST_H
#define TAIL_LINKED_LIST_H

struct tail_linked_list {
  struct node *head;
  struct node *tail;
  int size;
};

struct tail_linked_list *tail_linked_list_create();
void tail_linked_list_destroy(struct tail_linked_list *list);
void tail_linked_list_insert_first(struct tail_linked_list *list, int value);
void tail_linked_list_insert_last(struct tail_linked_list *list, int value);
void tail_linked_list_print(struct tail_linked_list *list);

#endif
