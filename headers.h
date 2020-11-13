#ifndef HEADERS_H_INCLUDED
#define HEADERS_H_INCLUDED
struct node
{
    int value;
    struct node *next;
};
typedef struct node snode;
snode* create_node(int);
void insert_node_first();
void insert_node_last();
void insert_node_pos();
void sorted_ascend();
void delete_pos();
void search();
void update_val();
void display();
void rev_display(snode *);


snode *newnode, *ptr, *prev, *temp;
snode *first = NULL, *last = NULL;


#endif // HEADERS_H_INCLUDED
