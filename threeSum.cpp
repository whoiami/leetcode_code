#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<vector<int>> twoSum(vector<int>&num,int endpoint,int target){

        int start=0;

        int end=endpoint;

        vector<vector<int>> res;

        if(num.size()<=1)return res;

        while(start<end){

            if(num[start]+num[end]>target){end--;}

            else if(num[start]+num[end]<target){start++;}

            else if(num[start]+num[end]==target){

                vector<int>tmp;

                tmp.push_back(num[start]);

                tmp.push_back(num[end]);

                res.push_back(tmp);

                start++;

                end--;

                while(start<end&&num[start-1]==num[start])start++;

                while(start<end&&num[end+1]==num[end])end--;

            }

        }

        return res;

    }

vector<vector<int> > threeSum(vector<int> &num) {

        sort(num.begin(),num.end());

        vector<vector<int>>res;

        if(num.size()<=2)return res;

        for(int i=num.size()-1;i>=2;i--){

            if(i<num.size()-1&&num[i]==num[i+1])continue;

            vector<vector<int>>cur=twoSum(num,i-1,-num[i]);

            for(int j=0;j<cur.size();j++){

                cur[j].push_back(num[i]);

                res.push_back(cur[j]);

            }

        }

    }

int main(){
    vector<int>num(4,0);
    threeSum(num);
}
