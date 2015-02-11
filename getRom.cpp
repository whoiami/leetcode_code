#include <stdio.h>
#include <vector>
using namespace std;
vector<int> getRow(int rowIndex){
    vector<int> triangle=vector<int>(rowIndex+1);
    int i,j;
    if(rowIndex<0)return triangle;
        triangle[0]=1;
        for(i=0;i<=rowIndex;i++){
            for(j=i-1;j>0;j--){
                triangle[j]=triangle[j-1]+triangle[j];
            }
            triangle[i]=1;
        }
    return triangle;
}
int main(){
   getRow(0);
   return 0;
}
