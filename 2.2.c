#include <stdio.h>

typedef struct node{
    int data;
    struct node *next;
}node;

void kth2end(int k,node *head){
    int i;
    node *tmp=head;
    for(i=0;i<k-1;i++){
	tmp = tmp->next;
    }
    while(tmp!=NULL){
	printf("%d\n",tmp->data);
	tmp = tmp->next;	
    }
}
void main(){
    node *head,*current,*last;
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
    kth2end(3,head); 
}
