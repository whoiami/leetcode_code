#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
typedef struct TreeNode{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
}TreeNode;
TreeNode *bulid(vector<int> &postorder,vector<int>&inorder,int postH,int postT,int inH,int inT,unordered_map<int,int> &map);
TreeNode *buildTree(vector<int>&postorder,vector<int>&inorder);

TreeNode *build(vector<int> &postorder,vector<int>&inorder,int postH,int postT,int inH,int inT,unordered_map<int,int> &map){

            if(postH>postT||inH>inT)return NULL;

            TreeNode *root=new TreeNode();
	    root->val=postorder[postT];

            int index =map[root->val];

            root->left=build(postorder,inorder,postH,index-inH+postH-1,inH,index-1,map);

            root->right=build(postorder,inorder,index-inH+postH,postT-1,index+1,inT,map);

            return root;

        }

        TreeNode *buildTree(vector<int>&postorder,vector<int>&inorder){

            if(postorder.empty()||inorder.empty())return NULL;

            unordered_map<int,int> map;

            for(int i=0;i<inorder.size();i++){

                map.emplace(inorder[i],i);

            }

            return build(postorder,inorder,0,postorder.size()-1,0,inorder.size()-1,map);

        }
int main(){
    vector<int> postorder;
    postorder.push_back(1);
    postorder.push_back(3);
    postorder.push_back(2);
    vector<int> inorder;
    inorder.push_back(3);
    inorder.push_back(2);
    inorder.push_back(1);
    TreeNode *head=buildTree(postorder,inorder);
}
