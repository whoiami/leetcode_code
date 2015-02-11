#include <string>
#include <stack>
#include <vector>
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int evalRPN(vector<string> &tokens) {

        stack<int> tmpres;

        int i=0,first,second;

        while(i<tokens.size()){

                if(tmpres.size()>=2){

                    if(tokens[i]=="+"){

                        first=tmpres.top();

                        tmpres.pop();

                        second=tmpres.top();

                        tmpres.pop();

                        tmpres.push(first+second);

                    }

                    if(tokens[i]=="-"){

                        first=tmpres.top();

                        tmpres.pop();

                        second=tmpres.top();

                        tmpres.pop();

                        tmpres.push(second-first);

                    }

                    if(tokens[i]=="*"){

                        first=tmpres.top();

                        tmpres.pop();

                        second=tmpres.top();

                        tmpres.pop();

                        tmpres.push(first*second);

                    }

                    if(tokens[i]=="/"){

                        first=tmpres.top();

                        tmpres.pop();

                        second=tmpres.top();

                        tmpres.pop();

                        tmpres.push(second/first);

                    }

                }

            else tmpres.push(atoi(tokens[i].c_str()));
	    i++;
        }

        return tmpres.top();

    }

int main(){
    vector<string> a;
    a.push_back("4");
    a.push_back("13");
    a.push_back("5");
    a.push_back("/");
    a.push_back("+");
    evalRPN(a);
}
