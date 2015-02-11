#include <string>
#include <vector>
using namespace std;
void backtrack(int left,int right,vector<string>&res,string tmp){

        if(right<left)return;

        if(left==0&&right==0){

            res.push_back(tmp);
	    return;

        }

        if(left>0)backtrack(left-1,right,res,tmp+'(');

        if(right>0)backtrack(left,right-1,res,tmp+')');

    }
vector<string> generateParenthesis(int n) {

        vector<string> res;

        string tmp="";

        backtrack(n,n,res,tmp);

        return res;

    }
int main(){
    generateParenthesis(3);
}
