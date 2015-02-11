#include <iostream>

using namespace std;

typedef struct TreeNode{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
}TreeNode;
TreeNode *node;  
    void flat(TreeNode *root) {  
        if (root != NULL) {  
            if (node != NULL) {  
                node->left = NULL;  
                node->right = root;  
            }  
            node = root;  
            TreeNode *left = root->left;  
            TreeNode *right = root->right;  
            flat(left);  
            flat(right);  
        }          
    }  
void flatten(TreeNode *root) {  
        // Start typing your C/C++ solution below  
        // DO NOT write int main() function  
        node = NULL;  
        flat(root);  
    }  
int main(){
    TreeNode n1,n2;
    n1.val=1;n1.left=&n2;n1.right=NULL;
    n2.val=2;n2.left=NULL;n2.right=NULL;
    flatten(&n1);
}
