#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
}TreeNode;
class BSTIterator{
private:
TreeNode *privateroot,*res;
public:
    BSTIterator(TreeNode *root){
    	privateroot = root;
    }
bool hasNext() {

        TreeNode *tmpres = privateroot;

        if(tmpres == NULL)return false;

        if(tmpres->left==NULL){

            privateroot=NULL;

            res = tmpres;

            return true;

        }

        while(tmpres->left->left!=NULL){

            tmpres = tmpres->left;

        }

        res=tmpres->left;

        if(tmpres->left->right!=NULL)tmpres->left=tmpres->left->right;

        else tmpres->left=NULL;

        return true;

    }



    /** @return the next smallest number */

    int next() {

        if(hasNext())return res->val;

    }
};

int main(){
    TreeNode node;
    node.val=1;node.left=node.right=NULL;
    TreeNode *root= &node;
    BSTIterator i = BSTIterator(root);
    while(i.hasNext())cout <<i.next();
}
