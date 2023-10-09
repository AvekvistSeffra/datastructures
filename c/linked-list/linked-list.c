#include <stdlib.h>

#include "linked-list.h"
#include "node.h"

struct linked_list *linked_list_create() {
  struct linked_list *l =
      (struct linked_list *)malloc(sizeof(struct linked_list));

  l->head = NULL;
  l->size = 0;

  return l;
}

void linked_list_destroy(struct linked_list *l) {
  struct node *current = l->head;
  struct node *next;

  while (current != NULL) {
    next = current->next;
    node_destroy(current);
    current = next;
  }

  free(l);
}

void linked_list_insert(struct linked_list *l, int data) {
  struct node *n = node_create(data);

  n->next = l->head;
  l->head = n;
  l->size++;
}

void linked_list_print(struct linked_list *l) {
  struct node *current = l->head;

  while (current != NULL) {
    node_print(current);
    current = current->next;
  }
}
