#ifndef NODE_H
#define NODE_H

struct node {
  int data;
  struct node *next;
};

struct node *node_create(int value);
void node_destroy(struct node *node);
void node_print(struct node *node);

#endif
