#include <stdio.h>
#include <string>
using namespace std;

void reverseWords(string &s) {

        int i=s.size()-1;

        string tmp="";

        tmp.resize(s.size());

        while(s[i]==' '){

            i--;

        }

        int endpoint=i,j=0,tmpindex=0,flag=0;

        for(;i>=0;i--){

            if(s[i]==' '){
		j=i;

                while(j<endpoint){

                    j++;

                    tmp[tmpindex]=s[j];

                    tmpindex++;

                }

                endpoint=i-1;
		flag=1;
		if(flag=1)tmp[tmpindex++]=' ';

            }

        }

        s.replace(s.begin(),s.end(),tmp);

    }

int main(){
    string s=" I'am good  boy  ";
    reverseWords(s);
}
