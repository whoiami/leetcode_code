#include <string>
#include <iostream>

using namespace std;

string countAndSay(int n) {

        string s1="1",s2="";

        int i,j,counter=1;

        for(i=0;i<n-1;i++){

            for(j=0;j<s1.size();j++){

                if(j!=s1.size()-1&&s1[j]==s1[j+1]){

                    counter++;

                }

                else{

                    s2+=std::to_string(counter)+s1[j];
		    counter=1;

                }

            }

            s1=s2;
            s2.clear();

        }

        return s1;

    }
int main(){
    countAndSay(100);
}
