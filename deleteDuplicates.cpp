#include <iostream>
using namespace std;
typedef struct ListNode{
    int val;
    struct ListNode *next;
}ListNode;

ListNode *deleteDuplicates(ListNode *head) {

        if(head==NULL)return NULL;

        ListNode dommy;

        ListNode *pre=&dommy;

        dommy.next=head;

        while(head!=NULL){
	    while(head->next&&pre->next->val==head->next->val)head=head->next;

            if(pre->next==head)pre=pre->next;

            else pre->next=head->next;

            head=head->next;

        }

        return dommy.next;

    }

int main(){
    ListNode n1,n2;
    n1.val=1;n1.next=&n2;
    n2.val=1;n2.next=NULL;
    deleteDuplicates(&n1);
}
