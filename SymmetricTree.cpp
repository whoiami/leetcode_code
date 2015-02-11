#include <stdio.h>
#include <vector>
using namespace std;
typedef struct TreeNode{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
}TreeNode;

bool symmetric(TreeNode *left,TreeNode *right){

        if(left==NULL&&right==NULL)return true;

        if(left==NULL||right==NULL||left->val!=right->val)return false;

        return symmetric(left->left,right->right)&&symmetric(left->right,right->left);

    }

    bool isSymmetric(TreeNode *root) {

        if(root==NULL)return true;

        else return symmetric(root->left,root->right);

    }
 
int main(){
    TreeNode node1,node2;
    node1.val=1;node1.left=&node2;node1.right=NULL;
    node2.val=2;node2.left=NULL;node2.right=NULL;
    TreeNode *head;
    head = &node1;
    isSymmetric(head);
}
