#include <string>
#include <string.h>
using namespace std;
string longestPalindrome(string s) {

        int n=s.size();

        bool dp[n][n];

        memset(dp,0,sizeof(dp));

        string res="";

        int maxlen=0;

        for(int i=s.size()-1;i>=0;i--){

            for(int j=i;j<=s.size()-1;j++){

                if(s[i]==s[j]&&(i-j<=2||dp[i+1][j-1])){

                    dp[i][j]=1;

                    if(maxlen<j-i+1){

                        maxlen=j-i+1;

                        res=s.substr(i,j-i+1);

                    }

                }

            }

        }

        return res;

    }
int main(){
    string s="bb";
    string res=longestPalindrome(s);
}

