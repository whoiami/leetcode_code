#include <string>
using namespace std;

int numDecodings(string s) {

        int count=1;

        if(s[0]=='0'||s.size()<1)return 0;

        if(s.size()==1)return 1;

        for(int i=s.size()-1;i<0;i--){

            if(s[i-1]!='0'&&s[i]!='0'&&stoi(s.substr(i-1,2))<=26)count++;

            if(s[i-1]=='0'&&s[i]=='0')return 0;

        }

        return count;

    }
int main(){
    string a="11";
    numDecodings(a);
}
