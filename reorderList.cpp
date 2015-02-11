#include <iostream>

using namespace std;

typedef struct ListNode{
     int val;
     struct ListNode *next;
}ListNode;

void reorderList(ListNode *head) {

        if(head==NULL||head->next==NULL||head->next->next==NULL)return;

        ListNode *fast=head->next,*slow=head,*mid,*midnext,*tmp,*tonull;

        while(fast!=NULL&&fast->next!=NULL){

            fast=fast->next->next;

            slow=slow->next;

        }

        mid=slow->next;

        slow->next=NULL;

        //reverse
	//mid->next=NULL;
	tonull=mid;
        if(mid!=NULL&&mid->next!=NULL){

            midnext=mid->next;

            tmp=midnext->next;

        }

        while(mid!=NULL&&mid->next!=NULL){
	    midnext->next=mid;

            mid=midnext;

            midnext=tmp;
      	    if(tmp==NULL)break;

            tmp=midnext->next;
        }
	tonull->next=NULL;
        //head and mid combine

        ListNode *p=head,*tmp1,*tmp2;

        while(mid!=NULL){

            tmp1=p->next;

            tmp2=mid->next;

            p->next=mid;

            mid->next=tmp1;

            p=tmp1;

            mid=tmp2;

        }

    }

int main(){
    ListNode n1,n2,n3,n4;
    ListNode *head;
    n1.val=1;n2.val=2;n3.val=3;n4.val=4;
    n1.next=&n2;n2.next=&n3;n3.next=NULL;n4.next=NULL;
    head=&n1;
    reorderList(head);
}
