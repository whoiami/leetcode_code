#include <stdio.h>
#include <stdlib.h>
using namespace std;

typedef struct TreeNode{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
}TreeNode;

int height(TreeNode *root){
        if(root==NULL)return 0;
        if(root->left==NULL&&root->right==NULL)return 1;
        int left=height(root->left);
        int right=height(root->right);
        if(left>right)return left+1;
        else return right+1;
}
bool isBalanced(TreeNode *root){
    if(root==NULL)return true;
    if(abs(height(root->left)-height(root->right))>1)return false;
    return isBalanced(root->left)&&isBalanced(root->right);
}


int main(){
    TreeNode *head;
    TreeNode node1,node2;
    node1.val=1;node2.val=2;
    node1.left=&node2;
    node1.right=NULL;
    node2.left=node2.right=NULL;
    head=&node1;
    isBalanced(head);    
}
