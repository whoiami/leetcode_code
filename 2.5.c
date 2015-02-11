#include <stdio.h>

typedef struct node{
    int data;
    struct node *next;
    struct node *last;
}node;

void adder(node *first,node *second,node *result){
    int i,sumout=0;
    while(first!=NULL){
   	i = first->data+second->data+sumout; 
	sumout = i/10;
	result->data = i%10;
	result = result->next;
	first = first->next;
    	second = second->next;
    }
    result->data = sumout;
    
}

void main(){
    node node11,node12,node13,node21,node22,node23;
    node node31,node32,node33,node34;
    node *add1,*add2,*result;
    node11.data = 6;
    node12.data = 1;
    node13.data = 7;
    add1 = &node11;
    node11.next = &node12;
    node12.next = &node13;
    node13.next = NULL;
    
    add2 = &node21;
    node21.data = 2;
    node22.data = 9;
    node23.data = 5;
    node21.next = &node22;
    node22.next = &node23;
    node23.next = NULL;
    
    result = &node31;
    node34.data = 0;
    node31.next = &node32;
    node32.next = &node33;
    node33.next = &node34;
    node34.next = NULL;
    adder(add1,add2,result);
    


}
