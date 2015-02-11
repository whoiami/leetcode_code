#include <stdio.h>
#include <stack>
typedef struct node{
    int val;
    int min;
}node;
std::stack<node> mystack;
void push(int x){
    node newnode=new node;
    newnode.val=x;
    mystack.push(newnode);
}

int main(){
    
}

