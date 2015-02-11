#include <iostream>

using namespace std;

typedef struct TreeNode{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
}TreeNode;

int sum=0;
void dfs(TreeNode *root,int tmp){

        if(root==NULL)return;

        tmp=tmp*10+root->val;

        dfs(root->left,tmp);

        dfs(root->right,tmp);

        if(root->left==NULL&&root->right==NULL)sum+=tmp;

    }
    int sumNumbers(TreeNode *root) {

        int tmp=0;

        dfs(root,tmp);

        return sum;

    }

int main(){
    TreeNode n1,n2,n3;
    TreeNode *head;
    head=&n1;
    n1.val=0;n1.left=&n2;n1.right=&n3;
    n2.val=1;n2.left=NULL;n2.right=NULL;
    n3.val=3;n3.left=NULL;n3.right=NULL;
    sumNumbers(head);
}
