#include <stdio.h>
#include <string.h>
#include <math.h>
void Insertion(int *array,int n){
    int i,tmp,k;
    for(i=0;i<n;i++){//from the first to end
	for(k=i;k>=1&&array[k]<array[k-1];k--){//swap back to first
	    tmp = array[k];
	    array[k] = array[k-1];
	    array[k-1] = tmp;
	}
    }
}
void merge(int a[], int low, int mid, int high){
    int b[100];
    memset(b,0,sizeof(b));
    int i=low, j=mid+1,k=0;
    while(i <= mid && j<=high){
    	if(a[i]<=a[j])b[k++] = a[i++];
	else b[k++] = a[j++];
    }
    while(i<=mid){
	b[k++] = a[i++];	
    }
    while(j<=high){
	b[k++] = a[j++];
    }
    k--;
    while(k>=0){
	a[low+k] = b[k];
	k--;
    }
}
  
void mergesort(int a[], int low, int high)
{
    if (low < high) {
        int m = (high + low)/2;
        mergesort(a, low, m);
        mergesort(a, m + 1, high);
        merge(a, low, m, high);
    }
}

void quickSort( int a[], int l, int r)
{
   int j;

   if( l < r ) 
   {
   	// divide and conquer
       j = partition( a, l, r);
       quickSort( a, l, j-1);
       quickSort( a, j+1, r);
   }
	
}



int partition( int a[], int l, int r) {
   int pivot, i, j, t;
   pivot = a[l];
   i = l; j = r+1;
		
   while( 1)
   {
   	do ++i; while( a[i] <= pivot && i <= r );
   	do --j; while( a[j] > pivot );
   	if( i >= j ) break;
   	t = a[i]; a[i] = a[j]; a[j] = t;
   }
   t = a[l]; a[l] = a[j]; a[j] = t;
   return j;
}

void main(){
    int array[10]={5,1,4,10,3,44,3,65,72,32};
    int i;
    //Insertion(array,10);
    //mergesort(array,0,9);
    quickSort(array,0,9);
    for(i=0;i<10;i++){
        printf("%d\n",array[i]);
    }
}
