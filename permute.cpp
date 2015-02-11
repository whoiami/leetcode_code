#include <vector>
#include <unordered_map>
using namespace std;
vector<vector<int>> res;
void backtrack(vector<int>&num,unordered_map<int,int>&used,vector<int>tmp){

        if(tmp.size()==num.size()){

            res.push_back(tmp);

            return;

        }

        for(int i=0;i<num.size();i++){

            if(used[num[i]]==0){

                tmp.push_back(num[i]);

                used[num[i]]=1;

                backtrack(num,used,tmp);

                used[num[i]]=0;

            }

        }

        return;

    }
vector<vector<int> > permute(vector<int> &num) {

        unordered_map<int,int> used;

        vector<int>tmp;

        for(int i=0;i<num.size();i++){

            used[num[i]]=0;

        }

        backtrack(num,used,tmp);

        return res;

    }
int main(){
    vector<int> num;
    num.push_back(0);
    num.push_back(1);
    permute(num);
}
