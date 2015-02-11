#include <algorithm>
#include <vector>

using namespace std;

vector<vector<int> > subsetsWithDup(vector<int> &S) {

        sort(S.begin(),S.end());

        vector<vector<int>> res;

        res.push_back({});

        int start=0;

        for(int i=0;i<S.size();i++){

            int size=res.size();

            for(int j=start;j<size;j++){

                vector<int>tmp(res[j].begin(),res[j].end());

                tmp.push_back(S[i]);

                res.push_back(tmp);

            }

            if(i+1<S.size()-1&&S[i+1]==S[i]){start=size;}

            else start=0;

        }

        return res;

    }
int main(){
    int tmp[]={1,2,3,4};
    vector<int>a(tmp,tmp+3);
    subsetsWithDup(a);
}
