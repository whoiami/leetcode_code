#include <vector>
#include <unordered_map>
using namespace std;
vector<int> twoSum(vector<int> &numbers, int target) {

        vector<int>res;

        unordered_map<int,int>hash;

        for(int i=0;i<numbers.size();i++){

            if(hash.find(target-numbers[i])!=hash.end()){

                res[0]=i+1;

                res[1]=hash[target-numbers[i]]+1;

                return res;

            }

            else hash[i]=numbers[i];

        }

        return res;

    }
int main(){
    vector<int>numbers;
    numbers.push_back(3);
    numbers.push_back(2);
    numbers.push_back(4);
    twoSum(numbers,6);
}
