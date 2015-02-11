#include <stdio.h>
typedef struct node {
    int data;
    struct node *next;
}node;


void main(){
    node *head,*current,*last,*head1;
    node node1,node2,node3,node4;
    node1.data=1;
    node2.data=2;
    node3.data=1;
    node4.data=5;
    head = &node1;
    head1 = head;
    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = NULL;
    while(head->next!=NULL){
	current = head->next;
	last = head;
    	while(current->next!=NULL){
	    if(head->data==current->data)last->next=current->next;
	    else last = last->next;
	     current = current->next;
	}
	head = head->next;
    }
}
