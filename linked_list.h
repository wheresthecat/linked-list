#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node {
    int data;
    struct node *next;
} node;

typedef struct list {
    struct node *first;
} list;

list *list_init(); // works I guess
node *create_node(int value); // works I guess

void list_append(list *srcList, int value); // works I guess
void list_print(list *srcList); // works I guess
node *list_get_node(list *srcList, int index); // works... sort of.. :D
void list_del_node(list *srcList, int index); // works, very rough, need some work in the future
void list_del_last(list *srcList);
void list_del_first(list *srcList); // works sort of
void list_destroy(list *srcList); // it doesn't crash, ergo it works


#endif