#include <stdio.h>
typedef struct node{
    int data;
    struct node *left;
    struct node *right;
    struct node *parent;
}node;

void traversal(node *head){
    //postorder
    if(head==NULL)return;
    traversal(head->left);
    traversal(head->right);
    printf("%d",head->data);
}

node * findMin(node *target){
    while(target->left!=NULL){
	target = target->left;	
    }
    return target;
}

void removeBST(node *target){
    node *tmp;
    if(target->left==NULL || target->right==NULL){
	if(target->parent->left==target){
	    if(target->left==NULL)target->parent->left = target->right;
	    if(target->right==NULL)target->parent->left = target->left;
	}	
	if(target->parent->right==target){
	    if(target->left==NULL)target->parent->right = target->right;
            if(target->right==NULL)target->parent->right = target->left;
	}
    }
    else{
	tmp = findMin(target->right);
	target->data = tmp->data;
	removeBST(tmp);
    }
}
void main(){
    node node1,node2,node3,node4,node5,node6,node7;
    node *head;
    head = &node1;
    node1.data = 6;
    node1.left = &node2;
    node1.right = &node3;
    node2.data = 2;
    node2.left = &node4;
    node2.right = &node5;
    node3.data = 8;
    node3.left = NULL;
    node3.right = NULL;
    node4.data = 1;
    node4.left = NULL;
    node4.right = NULL;
    node5.data = 5;
    node5.left = &node6;
    node5.right = NULL;
    node6.data =3;
    node6.left = NULL;
    node6.right = &node7;
    node7.data = 4;
    node7.left = NULL;
    node7.right = NULL;
    node1.parent = NULL;
    node2.parent = &node1;
    node3.parent = &node1;
    node4.parent = &node2;
    node5.parent = &node2;
    node6.parent = &node5;
    node7.parent = &node6;
    traversal(head);
    printf("\n");
    removeBST(&node2);
    traversal(head);
    printf("\n");
}
