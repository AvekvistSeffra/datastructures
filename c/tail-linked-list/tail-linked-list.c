#include "tail-linked-list.h"
#include <stdlib.h>

struct tail_linked_list *tail_linked_list_create() {
  struct tail_linked_list *l =
      (struct tail_linked_list *)malloc(sizeof(struct tail_linked_list));

  l->head = NULL;
  l->tail = NULL;
  l->size = 0;

  return l;
}

void tail_linked_list_destroy(struct tail_linked_list *l) {
  struct node *current = l->head;
  struct node *next;

  while (current != NULL) {
    next = current->next;
    node_destroy(current);
    current = next;
  }

  free(l);
}

void tail_linked_list_insert_first(struct tail_linked_list *l, int data) {
  struct node *n = node_create(data);

  if (l->head == NULL) {
    l->head = n;
    l->tail = n;
  } else {
    n->next = l->head;
    l->head = n;
  }

  l->size++;
}

void tail_linked_list_insert_last(struct tail_linked_list *l, int data) {
  struct node *n = node_create(data);

  if (l->head == NULL) {
    l->head = n;
    l->tail = n;
  } else {
    l->tail->next = n;
    l->tail = n;
  }

  l->size++;
}

void tail_linked_list_print(struct tail_linked_list *l) {
  struct node *current = l->head;

  while (current != NULL) {
    node_print(current);
    current = current->next;
  }
}
