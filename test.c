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
    // List creation
    printf("List creation, and appending.\n");
    list *numbers = list_init();

    for(int i = 0; i < 32; i++)
    {
        list_append(numbers, i);
    }

    printf("Printing the list.\n\n");
    list_print(numbers);

    list_del_last(numbers);
    printf("After deleting last node.\n");
    list_print(numbers);
    list_del_last(numbers);
    printf("After deleting last node.\n");
    list_print(numbers);

    printf("After deleting first node.\n");
    list_del_first(numbers);
    list_print(numbers);

    list_del_node(numbers, 5);
    printf("After deleting node index 5.\n");
    list_print(numbers);
    

    list_destroy(numbers);

    printf("\nEnd\n");
}
