#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int> &num) {

        if(num.size()==1)return;

        int i=num.size()-2;

        int index=-1;

        while(i>=0&&num[i]>=num[i+1]){

            i--;            

        }

        if(i<0){

            reverse(num.begin(),num.end());

            return;

        }

        else{

            int min=10000;

            int j=i;

            j++;

            for(int k=num.size()-1;k>=j;k--){

                if(num[k]>num[i]&&num[k]<min){

                    index=k;

                    min=num[k];

                }

            }

        }

        int tmp=num[i];

        num[i]=num[index];

        num[index]=tmp;

        reverse(num.begin()+i+1,num.end());

    }
int main(){
    vector<int>num;
    num.push_back(2);
    num.push_back(3);
    num.push_back(1);
    nextPermutation(num);
}
