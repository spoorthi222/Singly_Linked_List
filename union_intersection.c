/*
 * Function to Intersection & Union of 2 Linked Lists
    Author : SPOORTHI
 */
#include <stdio.h>
#include <stdlib.h>

struct node1
{
    int num;
    struct node1 *next;
};
void union_inter()
{
void create(struct node1 **);
void findunion(struct node1 *, struct node1 *, struct node1 **);
void findintersect(struct node1 *, struct node1 *, struct node1 **);
void display1(struct node1 *);
void release(struct node1 **);

struct node1 *phead, *qhead, *intersect, *unionlist;

phead = qhead = intersect = unionlist = NULL;
printf("Enter elements in the list 1\n");
create(&phead);
printf("\nEnter elements in the list 2\n");
create(&qhead);
findunion(phead, qhead, &unionlist);
findintersect(phead, qhead, &intersect);
printf("\nDisplaying list 1:\n");
display(phead);
printf("Displaying list 2:\n");
display(qhead);
printf("Displaying the union of the 2 lists:\n");
display(unionlist);
printf("Displaying the intersection of the 2 lists:\n");
if (intersect == NULL)
{
    printf("Null\n");
}
else
{
    display(intersect);
}
}

void findintersect(struct node1 *p, struct node1 *q, struct node1 **intersect)
{
    struct node1 *ptemp, *qtemp, *itemp, *irear, *ifront;

    ptemp = p;
    while (ptemp != NULL)
    {
        qtemp = q;
        ifront = *intersect;
        while (qtemp != NULL && ptemp->num != qtemp->num)
        {
            qtemp = qtemp->next;
        }
        if (qtemp != NULL)
        {
            if (ifront != NULL)
            {
                if (ifront->num == qtemp->num)
                {
                    ptemp = ptemp->next;
                    continue;
                }
                ifront = ifront->next;
            }
            itemp = (struct node *)malloc(sizeof(struct node));
            itemp->num = qtemp->num;
            itemp->next = NULL;
            if (*intersect == NULL)
            {
                *intersect = itemp;
            }
            else
            {
                irear->next = itemp;
            }
            irear = itemp;
        }
        ptemp = ptemp->next;
    }
}

void findunion(struct node1 *p, struct node1 *q, struct node1 **unionlist)
{
    struct node1 *utemp, *ufront, *urear;
    int flag = 0;

    while (p != NULL)
    {
        ufront = *unionlist;
        while (ufront != NULL)
        {
            if (ufront->num == p->num)
            {
                flag = 1;
            }
            ufront = ufront->next;
        }
        if (flag)
        {
            flag = 0;
        }
        else
        {
            utemp = (struct node *)malloc(sizeof(struct node));
            utemp->num = p->num;
            utemp->next = NULL;
            if (*unionlist == NULL)
            {
                *unionlist = utemp;
            }
            else
            {
                urear->next = utemp;
            }
            urear = utemp;
        }
        p = p->next;
    }
    while (q != NULL)
    {
        ufront = *unionlist;
        while (ufront != NULL)
        {
            if (ufront->num == q->num)
            {
                flag = 1;
            }
            ufront = ufront->next;
        }
        if (flag)
        {
            flag = 0;
        }
        else
        {
            utemp = (struct node1 *)malloc(sizeof(struct node1));
            utemp->num = q->num;
            utemp->next = NULL;
            if (*unionlist == NULL)
            {
                *unionlist = utemp;
            }
            else
            {
                urear->next = utemp;
            }
            urear = utemp;
        }
        q = q->next;
    }
}

void create(struct node1 **head)
{
    struct node1 *temp, *rear;
    int ch, a;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &a);
        temp = (struct node1 *)malloc(sizeof(struct node1));
        temp->num = a;
        temp->next = NULL;
        if (*head == NULL)
        {
            *head = temp;
        }
        else
        {
            rear->next = temp;
        }
        rear = temp;
        printf("Do you want to continue [1/0] ? ");
        scanf("%d", &ch);
    } while (ch != 0);
}

void display1(struct node1 *head)
{
    while (head != NULL)
    {
        printf("%d   ", head->num);
        head = head->next;
    }
    printf("\n");
}


