#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *next;
}node;

void findloop(node *head){
    node *fast,*slow;
    fast = head;
    slow = head;
    while(slow->next!=NULL){
	slow = slow->next;
	fast = fast->next->next;
  	if(slow==fast)break;
    }
    slow = head;
    while(slow->next!=NULL){
	slow = slow->next;
	fast = fast->next->next;
	if(slow==fast)break;
    }
}

void main(){
    node *head,*p,node1,*tmp,*tmp2;
    int i;
    head = &node1;
    tmp = head;
    node1.data = 0;
    node1.next =NULL;
    for(i=0;i<10;i++){
	p = (node*)malloc(sizeof(node));
	p->data = i;
	tmp->next = p;
	tmp = tmp->next;
    }
    p->next = NULL;
    tmp2 = p;
    
    node *head2,node2;
    node2.data = 100;
    node2.next = NULL;
    head2 = &node2;
    tmp = head2;
    for(i=0;i<3;i++){
	p = (node*)malloc(sizeof(node));
        p->data = i;
        tmp->next = p;
        tmp = tmp->next;
    }
    p->next = tmp2;
    tmp2->next = head2;
    findloop(head);
}

