#include <stdio.h>
using namespace std;
typedef struct TreeNode{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
}TreeNode;

bool hasPathSum(TreeNode *root, int sum){
    if(root==NULL)return false;
    if(root->val==sum&&root->left==NULL&&root->right==NULL)return true;
    if(root->left!=NULL)hasPathSum(root->left,sum-root->val);
    if(root->right!=NULL)hasPathSum(root->right,sum-root->val);
}
int main(){
    TreeNode *head;
    TreeNode node1,node2;
    node1.val=1;node2.val=2;
    node1.left=&node2;
    node1.right=NULL;
    node2.left=node2.right=NULL;
    head=&node1;
    hasPathSum(head,3);
}
