#include <iostream>
#include <string>
#include <stack>

using namespace std;

string simplifyPath(string path) {

        stack<string> res;

        int i=1;

        res.push("/");
	int last=0;

        while(i<path.size()){

            while(i<path.size()&&path[i]!='/')i++;

            string tmp=path.substr(last,i-last);

            if(tmp==".."&&!res.empty())res.pop();

            else if(tmp!="/")res.push(tmp);

            last=i;

            i++;

        }

        string result;

        while(!res.empty()){

            result=result+res.top();

            res.pop();

        }

        return result;

    }

int main(){
   string a="/a/.../b/.././//cccc";
   string b=simplifyPath(a);
   cout<<b;
}
