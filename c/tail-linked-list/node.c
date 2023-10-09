#include <stdio.h>
#include <stdlib.h>

#include "node.h"

struct node *node_create(int data) {
  struct node *n = (struct node *)malloc(sizeof(struct node));

  n->data = data;
  n->next = NULL;

  return n;
}

void node_destroy(struct node *n) { free(n); }

void node_print(struct node *n) {
  if (n->next != NULL) {
    fprintf(stdout, "%d -> ", n->data);
  } else {
    fprintf(stdout, "%d\n", n->data);
  }
}
