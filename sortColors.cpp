#include <iostream>

using namespace std;

void sortColors(int A[], int n) {

        int i=0;

        int j=n-1;

        int p=0;

        while(p<n&&p<=j){

            if(A[p]==0){

                int tmp=A[i];

                A[i]=A[p];

                A[p]=tmp;

                p++;
		i++;

            }

            else if(A[p]==2){

                int tmp=A[j];

                A[j]=A[p];

                A[p]=tmp;
		j--;

            }

            else p++;

        }

    }

int main(){
    int A[]={2};
    sortColors(A,1);
}
