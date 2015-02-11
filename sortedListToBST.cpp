#include <iostream>
using namespace std;

typedef struct ListNode{
    int val;
    struct ListNode *next;
}ListNode;

typedef struct TreeNode{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
}TreeNode;

TreeNode *half(ListNode *head,int counter){

        if(counter==0){

            TreeNode *root=new TreeNode;
	    root->val=head->val;

            return root;

        }

        int tmp=1;

        ListNode *curhead=head;

        while(tmp<counter){head=head->next;tmp++;}

        TreeNode *root=new TreeNode;
	root->val=head->val;

        root->left=half(curhead,(counter-1)/2);

        root->right=half(head->next,counter/2);

        return root;

    }
TreeNode *sortedListToBST(ListNode *head) {

        if(head==NULL)return NULL;

        int counter=0;

        ListNode *curhead=head;

        while(head!=NULL){counter++;head=head->next;}

        return(half(curhead,counter/2));

    }

int main(){
    ListNode n1,n2,n3,n4;
    n1.val=1;n1.next=&n2;
    n2.val=2;n2.next=&n3;
    n3.val=3;n3.next=&n4;
    n4.val=4;n4.next=NULL;
    TreeNode *res=sortedListToBST(&n1);
    int a=1;
}
