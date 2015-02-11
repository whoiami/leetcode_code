#include <iostream>

using namespace std;

int removeDuplicates(int A[], int n) {

        int count=1;

        int last=-1;

        int index=0;

        for(int i=0;i<n;i++){

            if(A[i]==last){

                count++;

                if(count>=3)continue;


            }

            else count=1;

            last=A[i];

            A[index++]=A[i];

        }

        return index;

    }

int main(){

}
