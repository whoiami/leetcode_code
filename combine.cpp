#include <vector>

using namespace std;

void backtrack(int n,int k,int start,vector<int>tmp,vector<vector<int>>res){

        if(tmp.size()==k){

            res.push_back(tmp);

            return;

        }

        //vector<int>curtmp(tmp.begin(),tmp.end());

        for(int i=start;i<n;i++){

            tmp.push_back(i+1);

            backtrack(n,k,start+1,tmp,res);

            tmp.pop_back();

        }

    }
vector<vector<int> > combine(int n, int k) {

        vector<vector<int>> res;

        vector<int>tmp;

        if(n<=0||n<k)return res;

        backtrack(n,k,0,tmp,res);

        return res;

    }
int main(){
    combine(1,1);
}
