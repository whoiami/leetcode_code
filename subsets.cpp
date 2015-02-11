#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int> > subsets(vector<int> &S) {

        sort(S.begin(),S.end());

        vector<vector<int>>res;

        res.push_back({});

        for(int i=0;i<S.size();i++){

            for(int j=0;j<res.size();j++){

                vector<int>tmp(res[j].begin(),res[j].end());

                tmp.push_back(S[i]);

                res.push_back(tmp);

            }

        }

        return res;

    }

int main(){
    int tmp[]={1,2,3};
    vector<int>a(tmp,tmp+2);
    subsets(a);    
}
