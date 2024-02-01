#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node {
    int data;
    struct node *next;
} node;

typedef struct list {
    struct node *first;
} list;

list *list_init();
node *create_node(int data);
void list_append(list *srcList, int value);
void list_print(list *srcList);


#endif