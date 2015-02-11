#include <iostream>

using namespace std;

typedef struct ListNode{
    int val;
    struct ListNode *next;
}ListNode;

ListNode *partition(ListNode *head, int x) {

        if(head==NULL)return NULL;

        ListNode *less=NULL,*bigger=NULL,*curhead,*res;

        curhead=head;

        while(curhead!=NULL){

            if(curhead->val<x){

                if(less==NULL){

                res=curhead;

                less=curhead;

                }

                else{

                    less->next=curhead;

                    less=less->next;

                }

            }

            if(curhead->val>=x){

                if(bigger==NULL)bigger=curhead;

                else{

                    bigger->next=curhead;

                    bigger=bigger->next;

                }

            }

            curhead=curhead->next;

        }
	if(bigger!=NULL)bigger->next=NULL;
        if(less!=NULL)less->next=bigger;

        else res=bigger;

        return res;

    }
int main(){
    ListNode n1,n2;
    n1.val=1;n1.next=&n2;
    n2.val=1;n2.next=NULL;
    partition(&n1,0);
}
