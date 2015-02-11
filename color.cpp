#include <iostream>

using namespace std;

void sortColors(int A[], int n) {

        int i=-1;

        int j=n;

        for(int p=0;p<n&&p<j;p++){

            if(A[p]==0){

                i++;

                int tmp=A[i];

                A[i]=A[p];

                A[p]=tmp;

            }

            if(A[p]==2){

                j--;

                int tmp=A[j];

                A[j]=A[p];

                A[p]=tmp;

            }

            if(A[p]==0){

                i++;

                int tmp=A[i];

                A[i]=A[p];

                A[p]=tmp;

            }

        }

    }

int main(){
    int A[]={0,0,1,0,1,1};
    sortColors(A,6);
}
