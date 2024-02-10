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
    list *mrkev = list_init();

    for(int i = 0; i < 10; i++)
    {
        list_append(mrkev, i);
    }

    printf("Printing the list.\n\n");
    

    list_print(mrkev);

    list_del_last(mrkev);

    list_print(mrkev);

    list_del_last(mrkev);

    list_print(mrkev);
    

    list_destroy(mrkev);

    printf("\nEnd\n");
}
