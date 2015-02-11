#include <stdio.h>
#include <string>
#include <stack>
using namespace std;

stack<char> container;

    bool match(string s,int i){

        char tmp1 = container.top();

        char tmp2 = s[i];

        if(tmp1=='('&&tmp2==')')return true;

        if(tmp1=='{'&&tmp2=='}')return true;

        if(tmp1=='['&&tmp2==']')return true;

        else return false;

    }

    bool isValid(string s) {

        int i;

        if(s.size()/2)return false;

        if(s.size()==0)return false;

        for(i=0;i<s.size();i++){

            if(container.size()!=0&&match(s,i)){

                container.pop();

                continue;

            }

            container.push(s[i]);

        }

        if(container.empty())return true;

        else return false;

    }

int main(){
    string s;
    s="()";
    bool a=isValid(s);
}
