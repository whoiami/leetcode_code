#include <stdio.h>
using namespace std;
int removeElement(int A[], int n, int elem) {

        int i;

        for(i=0;i<n;i++){

            if(A[i]==elem)A[i]='\0';

        }

        int j=0;

        i=0;

        while(i<n){

            if(A[i]=='\0')i++;

            else{

                if(i!=j)

                    A[i]=A[j];

                    i++;j++;

            }

        }

        return n-(j-i);

    }

int main(){
    int A[]={1};
    removeElement(A,1,1);
}
