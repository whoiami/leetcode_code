#include <stdio.h>
#include <string>
#include <stdlib.h>

using namespace std;
string addBinary(string a, string b) {

        int i=abs(a.size()-b.size());

        for(;i>0;i--){

            if(a.size()>b.size())b.insert(b.begin(),'0');

            if(b.size()>a.size())a.insert(a.begin(),'0');

        }

        int j=a.size()>b.size()?a.size():b.size();

        int cout=0;

        string result;

        result.resize(j);

        for(j=j-1;j>=0;j--){

            result[j] = (a[j]-'0'+b[j]-'0'+cout)%2+'0';

            cout = (int)(a[j]-'0'+b[j]-'0'+cout)/2;

        }

        if(cout==1)result.insert(result.begin(),'1');

        return result;

    }

int main(){
    string a="1";
    string b="111";
    string c=addBinary(a,b);
}
