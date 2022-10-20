#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#include "ui.h"

void linkedList_print_int(linkedList* head);

int main() {
    linkedList* head = linkedList_create_from_list((int[]){1,2,3,4,5,6,7,8,9,10}, 10, sizeof(int));
    linkedList_print_int(head);
    linkedList_free(head);
    return 0;
}

void linkedList_print_int(linkedList* head) {
    if(head == NULL) return;
    printf("Node value is : %d\n", *(int*)linkedList_first_data(head));
    linkedList_print_int(head->next);
}