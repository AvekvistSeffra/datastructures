#ifndef __NODE_H__
#define __NODE_H__

struct node {
  int data;
  struct node *next;
};

struct node *node_create(int value);
void node_destroy(struct node *node);
void node_print(struct node *node);

#endif
