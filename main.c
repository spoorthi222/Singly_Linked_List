/*
    Main Function
    Author : SPOORTHI
*/
#include <stdio.h>
#include <stdlib.h>
#include "headers.h"
#include "list.c"
#include "union_intersection.c"

/*
 * C Program to Implement Singly Linked List using Dynamic Memory Allocation
 */
#include <stdio.h>
#include <malloc.h>
#define ISEMPTY printf("\nEMPTY LIST:");
/*
 * Node Declaration
 */


/*
 * Main :contains menu
 */

 int main()
 {
    int ch;
    char ans = 'Y';

    while (ans == 'Y'||ans == 'y')
    {
        printf("\n---------------------------------\n");
        printf("\nOperations on singly linked list\n");
        printf("\n---------------------------------\n");
        printf("\n1.Insert node at first");
        printf("\n2.Insert node at last");
        printf("\n3.Insert node at position");
        printf("\n4.Sorted Linked List in Ascending Order");
        printf("\n5.Delete Node from any Position");
        printf("\n6.Update Node Value");
        printf("\n7.Search Element in the linked list");
        printf("\n8.Display List from Beginning to end");
        printf("\n9.Display List from end using Recursion");
        printf("\n 10.... union and intersection\n");
        printf("\n11.Exit\n");
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("\nEnter your choice");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\n...Inserting node at first...\n");
            insert_node_first();
            break;
        case 2:
            printf("\n...Inserting node at last...\n");
            insert_node_last();
            break;
        case 3:
            printf("\n...Inserting node at position...\n");
            insert_node_pos();
            break;
        case 4:
            printf("\n...Sorted Linked List in Ascending Order...\n");
            sorted_ascend();
            break;
        case 5:
            printf("\n...Deleting Node from any Position...\n");
            delete_pos();
            break;
        case 6:
            printf("\n...Updating Node Value...\n");
            update_val();
            break;
        case 7:
            printf("\n...Searching Element in the List...\n");
            search();
            break;
        case 8:
            printf("\n...Displaying List From Beginning to End...\n");
            display();
            break;
        case 9:
            printf("\n...Displaying List From End using Recursion...\n");
            rev_display(first);
            break;
        case 10:
            printf("\n .... union and intersection\n");
            union_inter();
        case 11:
            printf("\n...Exiting...\n");
            return 0;
            break;
        default:
            printf("\n...Invalid Choice...\n");
            break;
        }
        printf("\nYOU WANT TO CONTINUE (Y/N)");
        scanf(" %c", &ans);
    }
    return 0;
 }


