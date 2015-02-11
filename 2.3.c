#include <stdio.h>

typedef struct node{
    int data;
    struct node *next;
}node;


void deletemidnode(node *delnode){
    while(delnode->next->next!=NULL){
	delnode->data=delnode->next->data;
	delnode=delnode->next;
    }
    delnode->data=delnode->next->data;
    delnode->next=NULL;
}
void main(){
    node *head,*current;
    node node1,node2,node3,node4;
    node1.data=1;
    node2.data=2;
    node3.data=1;
    node4.data=5;
    head = &node1;
    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = NULL;
    current = &node2;
    deletemidnode(current);
}
