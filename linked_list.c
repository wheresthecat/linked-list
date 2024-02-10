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

void list_append(list *srcList, int value)
{
    node *newNode = NULL;

    if(srcList->first == NULL)
    {
        newNode = create_node(value);
        srcList->first = newNode;
    }
    else 
    {
        node *currentNode = srcList->first;
        while(currentNode->next != NULL)
        {
            currentNode = currentNode->next;
        }

        newNode = create_node(value);
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
        printf("%d ", currentNode->data);
        while(currentNode->next != NULL)
        {
            currentNode = currentNode->next;
            printf("%d ", currentNode->data);
        }
        printf("\n");
    }
}

node *list_get_node(list *srcList, int index)
{
    node *currentNode = srcList->first;
    int nodeCounter = 0;
    while(currentNode != NULL)
    {
        if(nodeCounter == index)
        {
            break;
        }
        nodeCounter++;
        currentNode = currentNode->next;
    }

    if(nodeCounter != index)
    {
        return NULL;
    }

    return currentNode;
}

void list_del_node(list *srcList, int index)
{
    node *targetNode = list_get_node(srcList, index);
    node *nextNode = list_get_node(srcList, index + 1);
    if(index == 0)
    {
        free(targetNode);
        srcList->first = nextNode;
        goto END;
    }

    node *previousNode = list_get_node(srcList, index-1);

    free(targetNode);
    previousNode->next = nextNode;
    END:
    ;
}

void list_del_last(list *srcList)
{
    node *currentNode = srcList->first;
    node *previousNode = NULL;
    while(currentNode->next != NULL)
    {
        previousNode = currentNode;
        currentNode = currentNode->next;
    }
    free(currentNode);
    previousNode->next = NULL;
}

void list_del_first(list *srcList)
{
    node *firstNode = srcList->first;
    node *nextNode = firstNode->next;
    free(firstNode);
    srcList->first = nextNode;
}

void list_destroy(list *srcList)
{
    node *currentNode = srcList->first;
    node *nextNode = currentNode->next;

    while(currentNode->next != NULL)
    {
        free(currentNode);
        currentNode = nextNode;
        nextNode = currentNode->next;
    }
    free(nextNode);
    free(currentNode);

    free(srcList);
}



