#include <stdio.h>

using namespace std;

int removeDuplicates(int A[], int n) {

        int i=0,j=1;

        if(n<=0)return 0;

        if(n==1)return 1;

        while(j<n){

            if(A[i]==A[j]){

                A[j]=-1;

                j++;

            }

            else{

                i=j;

                j++;

            }

        }

        i=j=0;

        while(j<n){

            if(A[i]==-1)j++;

            else{

                if(i!=j)A[i]=A[j];

                i++;j++;

            }

        }

        return n-(j-i);

    }

int main(){
    int A[]={1,1,2};
    removeDuplicates(A,3);
}
