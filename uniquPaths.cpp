#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int uniquePaths(int m, int n) {

        if(m==1||n==1)return 1;

        int res[m][n];
        int test[2][2];//memset will set memory by byte int's 4 bytes are all 1
// val is not 1 any more is Ox01010101
	int test2[m];
	memset(test,1,sizeof(test)*2);

        memset(res,2,sizeof(res)*m);
	memset(test2,2,sizeof(test2));
        for(int i=1;i<m;i++){

            for(int j=1;j<n;j++){

                res[i][j]=res[i-1][j]+res[i][j-1];

            }

        }

        return res[m-1][n-1];

    }

int main(){
    uniquePaths(2,2);
}
