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
    list_append(numbers, 10);
    list_append(numbers, 111);

    list_print(numbers);
}
