#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

void linked_list_test();

int main(int argc, char* argv[])
{
    
    linked_list_test();

    return(0);
}

void linked_list_test()
{
    list *numbers = list_init();

    list_append(numbers, 1);
    list_append(numbers, 2);
    list_append(numbers, 3);
    list_append(numbers, 4);
    list_append(numbers, 5);
    list_append(numbers, 6);
    list_append(numbers, 7);
    list_append(numbers, 8);

    for(int i = 0; i < 100000; i++)
    {
        list_append(numbers, i);
    }



    printf("End.\n");
}

// What if in the head is also saved addres of last node, maybe with node count?
