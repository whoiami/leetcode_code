#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
typedef struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
}TreeNode;
class Solution{
    public:
	TreeNode *build(vector<int> &preorder,vector<int>&inorder,int preH,int preT,int inH,int inT){
	if(preH>preT||inH>inT)return NULL;
	TreeNode *root=new TreeNode(preorder[preH]);
	int index = map[root->val];
	root->left=build(preorder,inorder,preH+1,index-inH+preH,inH,index-1,map);
	root-right=build(preorder,inorder,index-inH+preH+1,preT,index+1,inR,map);
	return root;
	}
	TreeNode *buildTree(vector<int>&preorder,vector<int>&inorder){
	    if(preorder.empty()||inorder.empty())return NULL;
	    unordered_map<int,int> map=new unordered_map<int,int>();
	    for(int i=0;i<inorder.size();i++){
	    	map.push_back(inorder[i],i);
    	    }
	    return build(preorder,inorder,0,preorder.size()-1,0,inorder.size());
	}
	
};
