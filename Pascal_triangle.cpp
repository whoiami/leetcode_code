#include <stdio.h>
#include <vector>
using namespace std;
vector< vector<int> > generate(int numRows){
   vector< vector<int> > result=vector< vector< int > >(numRows);
        vector<int> tmp=vector<int>(numRows);
        tmp[0]=1;
        int i,j;
        for(i=1;i<=numRows;i++){
            for(j=i-2;j>0;j--){
                tmp[j]=tmp[j]+tmp[j-1];
            }
            tmp[i-1]=1;
            result[i]=tmp;
        }
        return result;
}

int main(){
    generate(3);
    return 0;

}
