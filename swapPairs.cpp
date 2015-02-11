#include <iostream>

using namespace std;

typedef struct ListNode{
    int val;
    struct ListNode *next;
}ListNode;

ListNode *swapPairs(ListNode *head) {

        if(head==NULL||head->next==NULL){return head;}

        ListNode dummy;

        ListNode*curhead=&dummy;

        dummy.next=head;

        while(head!=NULL&&head->next!=NULL){

            ListNode *tmp=head->next->next;

            curhead->next=head->next;

            curhead->next->next=head;

            head->next=tmp;

            curhead=curhead->next->next;

            head=head->next;

        }

        return dummy.next;

    }

int main(){
    ListNode n1,n2;
    n1.val=1;n1.next=&n2;
    n2.val=2;n2.next=NULL;
    swapPairs(&n1);
    
}
