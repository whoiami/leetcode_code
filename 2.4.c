#include <stdio.h>

typedef struct node {
    int data;
    struct node *next;
}node;

node * rearrange(node *newnode,int comp){
    node *before=NULL,*after=NULL;
    node *betmp,*aftmp;
    while(newnode!=NULL){
    	if(newnode->data<=comp){
	    if(before==NULL){
	    	before=newnode;
	        betmp=newnode;
	    }
	    else{ 
	        betmp->next=newnode;
		betmp=newnode;
	    }
	}
        if(newnode->data>comp){
	    if(after==NULL){
	    	after=newnode;
	   	aftmp=newnode;
	    }
	    else{
	    	aftmp->next=newnode;
		aftmp=newnode;
	    }
	}
	newnode=newnode->next;
    }
    betmp->next=after;
    aftmp->next=NULL;
    return before;
}

void main(){
    node *head,*current,*last;
    node node1,node2,node3,node4,node5;
    node1.data=7;
    node2.data=5;
    node3.data=2;
    node4.data=1;
    node5.data=6;
    head = &node1;
    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node5;
    node5.next = NULL;
    head  = rearrange(head,3);
}
