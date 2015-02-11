#include <iostream>
using namespace std;

typedef struct ListNode{
    int val;
    struct ListNode *next;
}ListNode;

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {

        int cout=0;

        ListNode *curhead;

        ListNode n;
        n.val=0;

        curhead=&n;

        while(l1!=NULL&&l2!=NULL){

            ListNode n1;
	    n1.val=((l1->val+l2->val+cout)%10);

            curhead->next=&n1;

            curhead=curhead->next;

            cout=(l2->val+l1->val+cout)/10;

            l1=l1->next;

            l2=l2->next;

        }

        return n.next;

    }

int main(){
    ListNode n1,n2;
    n1.val=1;n2.val=1;
    n1.next=NULL;n2.next=NULL;
    addTwoNumbers(&n1,&n2);
}
