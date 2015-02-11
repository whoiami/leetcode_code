#include <iostream>
using namespace std;

int searchInsert(int A[], int n, int target) {

        int start=0,end=n-1;

        while(start<=end){

            int mid=(start+end)/2;

            if(target==A[mid])return mid;

            if(target>A[mid])start=mid+1;

            if(target<A[mid])end=mid-1;

        }

        if(end<0)return 0;

        else return start;

    }

int main(){
    int A[]={1};
    searchInsert(A,1,2);
}
