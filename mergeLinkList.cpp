#include <iostream>

using namespace std;

typedef struct ListNode{
    int val;
    struct ListNode *next;
}ListNode;

ListNode* mergesort(ListNode *p1head,ListNode *p2head){

        ListNode *p3head=NULL,*rhead;

        if(p1head->val<p2head->val)rhead=p1head;

        else rhead=p2head;

        while(p1head!=NULL&&p2head!=NULL){

            if(p1head->val<p2head->val){

                if(p3head==NULL)p3head=p1head;

                else{

                    p3head->next=p1head;

                    p3head=p3head->next;

                }

                p1head=p1head->next;

            }

            else{

                if(p3head==NULL)p3head=p2head;

                else{

                    p3head->next=p2head;

                    p3head=p3head->next;

                }

                p2head=p2head->next;

            }

        }

        if(p1head!=NULL){

            p3head->next=p1head;

        }

        if(p2head!=NULL){

            p3head->next=p2head;

        }

        return rhead;

    }

ListNode *sortList(ListNode *head){

        if(head==NULL||head->next==NULL)return head;

        ListNode *p1=head,*p2=head->next,*mid;

        while(p2!=NULL&&p2->next!=NULL){

            p1=p1->next;

            p2=p2->next->next;

        }

        mid=p1->next;

        p1->next=NULL;

        sortList(head);

        sortList(mid);

        return mergesort(sortLIst(head),sprtList(mid));

    }

int main(){
    ListNode *head;
    ListNode n1,n2,n3;
    head=&n1;
    n1.val=3;n2.val=2;n3.val=4;
    n1.next=&n2;n2.next=&n3;n3.next=NULL;
    sortList(head);
}
