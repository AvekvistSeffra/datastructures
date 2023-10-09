#include "node.h"

#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

struct linked_list {
  struct node *head;
  int size;
};

struct linked_list *linked_list_create();
void linked_list_destroy(struct linked_list *list);
void linked_list_insert(struct linked_list *list, int value);
void linked_list_print(struct linked_list *list);

#endif
