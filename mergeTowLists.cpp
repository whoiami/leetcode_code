#include <stdio.h>

using namespace std;

typedef struct ListNode{
    int val;
    struct ListNode *next;
}ListNode;

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {

        ListNode *head=NULL,*tmp;

        if(l1==NULL)return l2;

        if(l2==NULL)return l1;

        while(l1!=NULL&&l2!=NULL){

            if(l1->val<l2->val){

                if(head==NULL){tmp=l1;head=l1;l1=l1->next;}

                else{

                    head->next=l1;

                    l1=l1->next;

                    head=head->next;

                }

            }

            else{

                if(head==NULL){tmp=l2;head=l2;l2=l2->next;}

                else{

                    head->next=l2;

                    l2=l2->next;

                    head=head->next;

                }

            }

        }

        if(l1==NULL)head->next=l2;

        if(l2==NULL)head->next=l1;

        return tmp;

    }

int main(){
    ListNode node1,node2;
    ListNode *l1,*l2,*l3;
    node1.val=1;node1.next=NULL;
    node2.val=2;node2.next=NULL;
    l1=&node1;
    l2=&node2;
    l3=mergeTwoLists(l1,l2);
}
