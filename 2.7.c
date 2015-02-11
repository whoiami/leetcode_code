#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

typedef struct stack{
    int data[100];
    int size;
}stack;

void main(){
    node *head,node1,*p,*tmp,node2;
    int i;
    node1.data = 1;
    node1.next = NULL;
    tmp = &node1;
    for(i=0;i<5;i++){
	p =(node*)malloc(sizeof(node));
	p->data = i;
	tmp->next = p;
	tmp = tmp->next;
    }
    for(i=5;i>i=0;i--){
	p =(node*)malloc(sizeof(node));
        p->data = i;
        tmp->next = p;
        tmp = tmp->next;	
    }
    tmp->next = &node2;
    node2.data = 1;
    node2.next = NULL;
}

void pushsteak(int *array){
    array[]
}
