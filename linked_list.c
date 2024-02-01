#include "linked_list.h"

#include <stdio.h>
#include <stdlib.h>

list *list_init()
{
    list *newList = NULL;
    newList = malloc(sizeof(list));
    if(!newList)
    {
        return NULL;
    }
    newList->first = NULL;
    return newList;
}

node *create_node(int data)
{
    node *newNode = NULL;
    newNode = malloc(sizeof(node));
    if(!newNode)
    {
        return NULL;
    }

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

void list_append(list *srcList, int data)
{
    node *newNode = NULL;

    if(srcList->first == NULL)
    {
        newNode = create_node(data);
        srcList->first = newNode;
    }
    else 
    {
        node *currentNode = srcList->first;
        while(currentNode->next != NULL)
        {
            currentNode = currentNode->next;
        }

        newNode = create_node(data);
        currentNode->next = newNode;
    }
}

void list_print(list *srcList)
{
    node *currentNode = NULL;
    currentNode = malloc(sizeof(node));
    currentNode = srcList->first;

    if(currentNode == NULL)
    {
        printf("empty\n");
    }
    else
    {
        printf("%d, ", currentNode->data);
        while(currentNode->next != NULL)
        {
            currentNode = currentNode->next;
            printf("%d, ", currentNode->data);
        }
        printf("\n");
    }
}



